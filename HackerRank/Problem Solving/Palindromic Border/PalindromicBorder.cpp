#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define L 5000011
int sa[L];
int sai[L];
int lcp[L];
int v[L];
char s[L];
ll ts[L];
int p[L<<1];
char t[L<<1];
int m, n;
set<ll> found;
bool scomp(int i, int j) {
    return s[i] < s[j];
}
bool tscomp(int i, int j) {
    return ts[i] < ts[j];
}
void get_suffix_array() {
    for (int i = 0; i < n; i++) v[i] = i;
    sort(v, v + n, scomp);
    sai[v[0]] = 1;
    for (int i = 1; i < n; i++) {
        if (s[v[i]] == s[v[i - 1]]) {
            sai[v[i]] = sai[v[i - 1]];
        } else {
            sai[v[i]] = i+1;
        }
    }
    for (int p = 1; p <= n; p <<= 1) {
        for (int i = 0; i < n-p; i++) ts[i] = sai[i] * (n+1LL) + sai[i+p];
        for (int i = n-p; i < n; i++) ts[i] = sai[i] * (n+1LL);
        sort(v, v + n, tscomp);
        sai[v[0]] = 1;
        for (int i = 1; i < n; i++) {
            if (ts[v[i]] == ts[v[i - 1]]) {
                sai[v[i]] = sai[v[i - 1]];
            } else {
                sai[v[i]] = i+1;
            }
        }
    }
    for (int i = 0; i < n; i++) sai[i]--;
    for (int i = 0; i < n; i++) sa[sai[i]] = i;
}
void get_lcp() {
    for (int i = 0; i < n; i++) lcp[i] = 0;
    int l = 0;
    for (int i = 0; i < n-1; i++) {
        int k = sai[i];
        int j = k ? sa[k-1] : sa[n-1];
        while (j + l < n and s[i + l] == s[j + l]) {
            l++;
        }
        lcp[k] = l;
        if (l > 0) {
            l--;
        }
    }
}
void manacher() {
    // from wikipedia
    // t has been processed
    int center = 0, end = 0, left = 0, right = 0;
    for (int i = 1; i < m; i++) {
        if (i > end) {
            p[i] = 0;
            left = i - 1;
            right = i + 1;
        } else {
            int j = 2*center - i; // index on the other side
            if (p[j] < end - i) { // whole palindrome is inside
                p[i] = p[j];
                left = -1; // so we don't enter the loop below
            } else { 
                p[i] = end - i;
                right = end + 1;
                left = 2*i - right;
            }
        }
        while (left >= 0 and right < m and t[left] == t[right]) {
            p[i]++;
            left--;
            right++;
        }
        if (i + p[i] > end) {
            center = i;
            end = i + p[i];
        }
    }
}
struct Node {
    int i, j, v;
    Node *p, *l, *r;
    Node(int i, int j, Node *p = NULL): i(i), j(j), p(p) {
        if (j - i == 1) {
            l = r = NULL;
            v = lcp[i];
        } else {
            int k = i + j >> 1;
            l = new Node(i, k, this);
            r = new Node(k, j, this);
            v = min(l->v, r->v);
        }
    }
};
int node_minocc(Node *node, int v, int i) {
    // find maximum j, 0 <= j <= i such that a[j] < v
    while (node->l) {
        if (i < node->l->j) {
            node = node->l;
        } else {
            node = node->r;
        }
    }
    // now node->i = i < node->j = i+1
    if (node->v < v) {
        return node->i;
    }
    while (true) {
        while (node->p and node->p->l == node) {
            node = node->p;
        }
        if (!node->p) {
            return 0;
        }
        node = node->p;
        if (node->l->v < v) {
            node = node->l;
            break;
        }
    }
    while (node->l) {
        if (node->r->v < v) {
            node = node->r;
        } else {
            node = node->l;
        }
    }
    return node->i;
}
int node_maxocc(Node *node, int v, int i) {
    // find maximum j, i <= j <= n such that a[j] >= v
    if (i == n) {
        return n;
    }
    while (node->l) {
        if (i < node->l->j) {
            node = node->l;
        } else {
            node = node->r;
        }
    }
    // now node->i = i < node->j = i+1
    if (node->v < v) {
        return node->i;
    }
    while (true) {
        while (node->p and node->p->r == node) {
            node = node->p;
        }
        if (!node->p) {
            return n;
        }
        node = node->p;
        if (node->r->v < v) {
            node = node->r;
            break;
        }
    }
    while (node->l) {
        if (node->l->v < v) {
            node = node->l;
        } else {
            node = node->r;
        }
    }
    return node->i;
}
int main() {
    scanf("%s", s);
    n = strlen(s);
    // suffix tree
    get_suffix_array();
    get_lcp();
    Node *root = new Node(0, n);
    m = 0;
    for (int i = 0; i < n; i++) {
        t[m++] = '#';
        t[m++] = s[i];
    }
    t[m++] = '$';
    t[0] = '^';
    manacher();
    ll ans = 0;
    for (int i = 1; i < m-1; i++) {
        int k = p[i];
        if (t[i-k] == '#') k--;
        for(; k >= 0; k -= 2) {
            int start = sai[i-k>>1];
            int mino = node_minocc(root,k+1,start);
            ll hsh = k*(n+1LL)+mino;
            if (found.find(hsh) != found.end()) {
                break;
            }
            found.insert(hsh);
            int maxo = node_maxocc(root,k+1,start+1);
            ll c = maxo - mino;
            ans += c*(c-1);
            ans %= mod;
        }
    }
    ans = ans * (mod+1>>1) % mod;
    printf("%lld\n", ans);
}

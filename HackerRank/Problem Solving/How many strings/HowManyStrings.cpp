#include<bits/stdc++.h>
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define SZ(x) ((int)((x).size()))
#define rep(i,j,k) for(int i=(int)j;i<=(int)k;i++)
#define per(i,j,k) for(int i=(int)j;i>=(int)k;i--)
using namespace std;
typedef long long LL;
typedef double DB;
const DB pi=acos(-1.0);
const int N=100005;
int go[N<<1][26],fail[N<<1],len[N<<1],tot,last;
int n;
int cnt=0;
namespace seg{
    int tag[N<<2];
    LL sum[N<<2];
    inline void Tag(int me,int l,int r,int v){
        tag[me]+=v;
        sum[me]+=(r-l+1)*1ll*v;
    }
    inline void down(int me,int l,int r){
        if(tag[me]==0)return;
        int mid=(l+r)>>1;
        Tag(me<<1,l,mid,tag[me]);
        Tag(me<<1|1,mid+1,r,tag[me]);
        tag[me]=0;
    }
    void add(int me,int l,int r,int x,int y,int v){
        //if(l==1&&r==n)printf("add %d %d %d\n",x,y,v);
        if(l^r)down(me,l,r);
        if(x<=l&&r<=y){
            Tag(me,l,r,v);
            return;
        }
        int mid=(l+r)>>1;
        if(x<=mid)add(me<<1,l,mid,x,y,v);
        if(y>mid)add(me<<1|1,mid+1,r,x,y,v);
        sum[me]=sum[me<<1]+sum[me<<1|1];
    }
    LL ask(int me,int l,int r,int x,int y){
        if(l^r)down(me,l,r);
        if(x<=l&&r<=y)return sum[me];
        int mid=(l+r)>>1;
        LL ret=0;
        if(x<=mid)ret+=ask(me<<1,l,mid,x,y);
        if(y>mid)ret+=ask(me<<1|1,mid+1,r,x,y);
        return ret;
    }
    void Do(int pre,int now,int L,int R){
        if(L>R)return;
        ++cnt;
        //printf("_%d %d %d %d\n",pre,now,L,R);
        if(pre)add(1,1,n,pre-R+1,pre-L+1,-1);
        add(1,1,n,now-R+1,now-L+1,1);
    }
};
namespace lct{
    int l[N<<2],r[N<<2],fa[N<<2];
    int last[N<<2];
    inline bool top(int x){return (!fa[x])||(l[fa[x]]!=x&&r[fa[x]]!=x);}
    inline void left(int x){
        int y=fa[x];int z=fa[y];
        r[y]=l[x];if(l[x])fa[l[x]]=y;
        fa[x]=z;if(l[z]==y)l[z]=x;else if(r[z]==y)r[z]=x;
        l[x]=y;fa[y]=x;
    }
    inline void right(int x){
        int y=fa[x];int z=fa[y];
        l[y]=r[x];if(r[x])fa[r[x]]=y;
        fa[x]=z;if(l[z]==y)l[z]=x;else if(r[z]==y)r[z]=x;
        r[x]=y;fa[y]=x;
    }
    inline void down(int x){
        if(l[x])last[l[x]]=last[x];
        if(r[x])last[r[x]]=last[x];
    }
    int q[N<<2];
    inline void splay(int x){
        q[q[0]=1]=x;
        for(int k=x;!top(k);k=fa[k])q[++q[0]]=fa[k];
        per(i,q[0],1)down(q[i]);
        while(!top(x)){
            int y=fa[x];int z=fa[y];
            if(top(y)){
                if(l[y]==x)right(x);else left(x);
            }
            else{
                if(r[z]==y){
                    if(r[y]==x)left(y),left(x);
                    else right(x),left(x);
                }
                else{
                    if(l[y]==x)right(y),right(x);
                    else left(x),right(x);
                }
            }
        }
    }
    void Access(int x,int cov){
        int y=0;
        for(;x;y=x,x=fa[x]){
            splay(x);
            down(x);
            r[x]=0;

            int L,R;
            int z=x;
            while(l[z])z=l[z];
            L=len[fail[z]]+1;
            splay(z);splay(x);
            z=x;
            while(r[z])z=r[z];
            R=len[z];
            splay(z);splay(x);
            seg::Do(last[x],cov,L,R);
            r[x]=y;
            last[x]=cov;
        }
    }
    void SetFa(int x,int y,int po){
        fa[x]=y;
        Access(x,po);
    }
    void split(int x,int y,int d){
        splay(y);
        down(y);
        r[y]=0;
        fa[d]=y;
        splay(x);
        fa[x]=d;
        last[d]=last[x];
    }
};
namespace sam{
    void init(){
        tot=last=1;
    }
    void expended(int x,int po){
        int gt=++tot;len[gt]=len[last]+1;int p=last;last=tot;
        for(;p&&(!go[p][x]);p=fail[p])go[p][x]=gt;
        if(!p){
            fail[gt]=1;
            lct::SetFa(gt,1,po);
            return;
        }
        int xx=go[p][x];
        if(len[xx]==len[p]+1){
            fail[gt]=xx;
            lct::SetFa(gt,xx,po);
            return;
        }
        int tt=++tot;
        len[tt]=len[p]+1;
        fail[tt]=fail[xx];
        int dt=fail[xx];
        fail[xx]=fail[gt]=tt;
        lct::split(xx,dt,tt);
        lct::SetFa(gt,tt,po);
        rep(i,0,25)go[tt][i]=go[xx][i];
        for(;p&&(go[p][x]==xx);p=fail[p])go[p][x]=tt;
    }
};
int Q;
char str[N];
int qL[N];
vector<int>que[N];
LL ans[N];
void Main(){
    rep(i,1,n){
        sam::expended(str[i]-'a',i);
        rep(j,0,que[i].size()-1){
            int id=que[i][j];
            ans[id]=seg::ask(1,1,n,qL[id],n);
        }
    }
}
void init(){
    scanf("%d%d",&n,&Q);
    scanf("%s",str+1);
    rep(i,1,Q){
        int r;scanf("%d%d",&qL[i],&r);
        qL[i]++;r++;
        que[r].pb(i);
    }
    sam::init();
}
void Output(){
    rep(i,1,Q)printf("%lld\n",ans[i]);
}
int main(){
    init();
    Main();
    Output();
    return 0;
}

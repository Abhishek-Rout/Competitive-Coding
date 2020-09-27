#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for (int p = 0; p < t; ++p) 
    {
    int max = 0,n,k;
    cin >> n >> k;
    for (int i = 1; i < n; ++i) 
    {
        for (int j = i+1; j <= n; ++j) 
        {
        if ((i&j) > max && (i&j) < k) max = (i&j);
        }
    }
    cout << max << '\n';
    }
}

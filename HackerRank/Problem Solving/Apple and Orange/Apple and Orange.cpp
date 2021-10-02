#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin>>s>>t;
    
    int a, b;
    cin>>a>>b;
    
    int m, n;
    cin>>m>>n;
    
    int apple=0, orange=0;
    
    int aq[m], bq[n]; //aq--> How many apples fall from apple tree , bq--> How many oranges fall from orange tree.
    
    for(int i=0; i<m; i++)
    {
        cin>>aq[i];
    }
    
    for(int i=0; i<n; i++)
    {
        cin>>bq[i];
    }
    
    for(int i=0; i<m; i++)
    {
        if((a+aq[i]>=s) && (a+aq[i]<=t))
        {
            apple++;
        }
    }
    
    for(int i=0; i<n; i++)
    {
        if((b+bq[i]>=s) && (b+bq[i]<=t))
        {
            orange++;
        }
    }
    
    cout<<apple<<endl;
    cout<<orange<<endl;
    
    return 0;
}

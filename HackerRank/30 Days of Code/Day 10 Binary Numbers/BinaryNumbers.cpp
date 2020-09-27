#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int count=0,t=0,rem=0,f=0;
    while(n>0)
    {
        rem=n%2;
        n=n/2;

        if(rem==1)
        {
            f++;
            if(f>t)
            {
                t=f;
            }
        }
        else
        {
            f=0;
        }
    }
    cout<<t;

    return 0;
}

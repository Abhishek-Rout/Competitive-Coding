#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        /*else
        {
            int c=0;
            for(int i=3;i<n/2;i++)
            {
                if(n%i==0)
                {
                    c++;
                    //cout<<"Not Prime"<<endl;
                }
            }
            if(c==0)
            {
                cout<<"Prime"<<endl;
            }
            else
            {
                cout<<"Not prime"<<endl;
            }
        }*/
        if(n==2)
        {
            cout<<"Prime"<<endl;
        }
        else if(n==1)
        {
            cout<<"Not prime"<<endl;
        }
        else
        {
        int sq = sqrt(n),c=0;
        for(int i = 2; i <= sq; i++) 
        {
            if(n%i == 0)
            {
                c++;
            } //NOT PRIME
        }
        if(c!=0)
        {
            cout<<"Not prime"<<endl;
        }
        else
        {
            cout<<"Prime"<<endl;
        }
        }
    }  
    return 0;
}

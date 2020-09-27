#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int  t;
    cin>>t;
    while(t--)
    {
        vector<char> e;
        vector<char> o;
        
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                e.push_back(s[i]);
            }
            else
            {
                o.push_back(s[i]);
            }
        }

        for(int i=0;i<e.size();i++)
        {
            cout<<e[i];
        }
        cout<<" ";
        for(int i=0;i<o.size();i++)
        {
            cout<<o[i];
        }
        cout<<endl;
    }
    return 0;
}

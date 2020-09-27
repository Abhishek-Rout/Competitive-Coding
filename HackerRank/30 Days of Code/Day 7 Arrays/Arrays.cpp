#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> c;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        c.push_back(a);
    }

    reverse(c.begin(), c.end());

    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
}

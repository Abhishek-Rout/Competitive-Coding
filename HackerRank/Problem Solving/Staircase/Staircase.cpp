#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n;

    cin>>n;

    

    for(int i=1; i<=n; i++) //height

    {

        for(int j=1; j<=n-i; j++) //spaces

        {

            cout<<" ";

        }

        

        for(int k=1; k<=i; k++) //print "#"

        {

            cout<<"#";

        }

        

        cout<<endl;

    }

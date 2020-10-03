#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
	int n,r,R;
	cin>>n>>r;
	for(int i=0; i<n; i++)
	{
		cin>>R;
		R>=r ? cout<<"Good boi\n" : cout<<"Bad boi\n";
	}
	return 0;
}
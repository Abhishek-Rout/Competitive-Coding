#include <bits/stdc++.h> 

#define ll long long int 

using namespace std;

ll pos(ll sm){
    long double a = sqrtl(1ul + 4*(sm));
    a=a-1.0;
    a=a/2.0;
    ll fs=a;
    return fs;
}

int main() {
	ll t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n<3){
	        cout<<0<<endl; 
	        continue;
	    }
	    long long int tsum=n*(n+1)/2;
	    if(tsum%2!=0){
	        cout<<0<<endl; 
	        continue;
	    }
	    ll ind=pos(tsum);
	    ll s=ind*(ind+1)/2;
	    if(tsum/2==s){
	        ll o=(ind*(ind-1ul))/2l + ((n-ind)*(n-ind-1ul))/2l + (n-ind);
	        cout<<o<<endl;
	    }
	    else{
	        cout<<n-ind<<endl;
	    }
	}
	return 0;
}

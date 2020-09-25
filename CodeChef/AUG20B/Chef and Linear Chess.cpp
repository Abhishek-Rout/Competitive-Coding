#include<bits/stdc++.h>


using namespace std;


int main() 
{
    
	int t,n,i;
    
	long long k,p,l,j;
    
	std::cin >> t;
    
	while(t--){
        
		int flag=0;
        
		j=10000000;
        
		cin>>n>>k;
        
		for(i=0;i<n;i++)
		{
            
			cin>>p;
            
			if(k%p==0)
			{
                
				if(j>k/p)
                
				{
                    
					flag=1;
                    
					l=p;
                    
					j=k/p;
                
				}
            
			}
        
		}
        
		if(flag==0)
		{
            
			cout<<"-1\n";
        
		}
        
		else
		{
            
			cout<<l<<"\n";
        
		}
        
    
	}
	
	return 0;

}

#include <iostream>


using namespace std;



int main() 
{
	
	int t;
	
	long c,r;
	
	std::cin >> t;
	
	while(t--)
	
	{
	    
		cin>>c>>r;
	    
		int dc=c%9;
	    
		int tdc=((c-dc)/9);
	    
		if(dc)
		{
	        
			tdc++;
	    
		}
	    
		int dr=r%9;
	    
		int tdr=((r-dr)/9);
	    
		if(dr)
		{
	        
			tdr++;
	    
		}
	    
		if(tdr<=tdc)
		{
	        
			std::cout << 1<<" "<<tdr;
	    
		}
	    
		else
		{
	        
			cout<<0<<" "<<tdc;
	    
		}
	    
		cout<<"\n";
	
	}
	
	return 0;

}

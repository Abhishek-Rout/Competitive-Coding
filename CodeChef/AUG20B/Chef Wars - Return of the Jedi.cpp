#include <iostream>


using namespace std;



int main()
{
    
	long long int t,p,h;

	cin>>t;
    
	while(t--)
	{
        
		cin>>p>>h;       
		while(h>0)
        
		{
            
			p=p-h;
            
			h=h/2;
        
		}
        
		if(p<=0)
		{
            
			cout<<"1\n";
        
		}
        
		else
		{
            
			cout<<"0\n";
        
		}
    
	}

}

#include <bits/stdc++.h> 


using namespace std;



int main() 
{
    
	int t;
    
	cin>>t;
    
	while(t--)
	{
        
		int n,a;
        
		cin>>n;
        
		set<int> s;
        
		int zero=-1;
        
		for(int i=0;i<n;i++)
        
		{
            
			cin>>a;
            
			if(a==0)
                
				zero=0;

            
			s.insert(a);
        
		}
        
		
		if(zero==-1)
            
			cout << s.size() <<endl;
        
		else
            
			cout<<s.size()-1<<endl;
    
	}
	
	return 0;

}

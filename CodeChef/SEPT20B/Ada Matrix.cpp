#include <bits/stdc++.h> 


using namespace std;



#define N 64 

void transpose(int A[][N],int n) 

{ 
    
	for (int i = 0; i < n; i++) 
        
		for (int j = i+1; j < n; j++) 
            
			swap(A[i][j], A[j][i]); 

}


int main() 
{
	
	int a[64][64],t;
	
	cin>>t;

	while(t--)
	{

		int cnt=0,n=0;
	    
		cin>>n;
	    
		for(int i=0;i<n;i++)
		{
	        
			for(int j=0;j<n;j++)
			{
	            
				cin>>a[i][j];
	        
			}
	    
		}
	  
      
		for(int j=n-1;j>=0;j--)
		{
	            
			if(a[0][j]!=j+1)
			{
	                
				transpose(a,j);
	                
				cnt++;
	            
			}
	       
		}
	    
		cout << cnt <<endl;
	
	}
	
	
	return 0;

}

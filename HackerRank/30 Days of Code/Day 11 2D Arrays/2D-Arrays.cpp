#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            cin >> arr[i][j];
        }        
    }

    vector<int> sum;

    int h=0,c,max=0;
    for (int i = 0; i < 4; i++) 
    {

        for (int j = 0; j < 4; j++) 
        {
            c=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            sum.push_back(c);
        }      
    }
    int l=sum.size();
    sort(sum.begin(),sum.end());
    cout<<sum[l-1];



    return 0;
}

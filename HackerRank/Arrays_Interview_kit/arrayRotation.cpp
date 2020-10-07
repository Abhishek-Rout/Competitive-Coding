#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,d;
    int arr[n];

    cin >> n >> d;
     for (size_t i = 0; i < n; i++
     )
     {
         cin >> arr[i];
     }

     vector <int> v1;

     for (size_t i = d; i < n; i++)
     {
         v1.push_back(arr[i]);
     }

     for (size_t i = 0; i < d; i++)
     {
         v1.push_back(arr[i]);
     }

     for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";

}

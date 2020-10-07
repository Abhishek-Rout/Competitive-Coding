#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int findminswaps(int arr[], int n)
{

    vector<pair<int, int>> vec(n);
    int counts = 0;

    for (size_t i = 0; i < n; i++)
    {
        vec[i].first = arr[i];
        vec[i].second = i;
    }

    sort(vec.begin(), vec.end());

    for (size_t i = 0; i < n; i++)
    {
        if (i == vec[i].second)
            continue;
        else

            swap(vec[i].first, vec[vec[i].second].first);
        swap(vec[i].second, vec[vec[i].second].second);

        if (i != vec[i].second)
            --i;

        counts++;
    }

    return counts;
}

int main()
{
    int  t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = findminswaps(arr, n);

        cout << ans << "\n";
    }
}

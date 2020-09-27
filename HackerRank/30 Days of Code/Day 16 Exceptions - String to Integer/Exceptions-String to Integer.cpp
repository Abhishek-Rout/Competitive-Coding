#include <bits/stdc++.h>
using namespace std;


int main()
{
    string S;
    cin >> S;
    try
    {
        int no;
        no=stoi(S);
        cout<<no<<endl;
    }
    catch(exception a)
    {
        cout<<"Bad String";
    }
    return 0;
}

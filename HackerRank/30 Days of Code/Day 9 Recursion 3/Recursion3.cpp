#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
    int fac;
    if(n==0)
    {
        return 1;
    }
    else
    {
        n=n*factorial(n-1);
        return n;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

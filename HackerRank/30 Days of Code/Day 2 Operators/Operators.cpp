#include <bits/stdc++.h>

using namespace std;

int main()
{
    float mealc,tipp,taxp;
    cin>>mealc;
    cin>>tipp;
    cin>>taxp;

    float tip,tax,total;
    tip=(mealc*tipp)/100;
    tax=(mealc*taxp)/100;

    total=mealc+tip+tax;

    cout<<round(total);
}

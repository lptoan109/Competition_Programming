#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a;
    cin >> a;
    if(a%2==0){
        long long a2=a*a;
        long long a3= a*a*a;
        cout << fixed << setprecision(2);
        cout << a2 << "\n" << a3;
    }
    else {
        double a4 = sqrt(a);
        double a5 = 1.0/a;
        cout << fixed << setprecision(2);
        cout << a4 << "\n" << a5;
    }
    return 0;
}

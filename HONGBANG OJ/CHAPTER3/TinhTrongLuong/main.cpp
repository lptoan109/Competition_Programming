#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ten;
    double kl;
    getline(cin,ten);
    cin >> kl;
    double kltd = kl*10;
    double klmt = kl*10*27.9;
    double klmtra = kl*10*0.17;
    double klst = kl*10*0.37;
    double klsm = kl*10*2.64;
    cout << setprecision(15);
    cout << ten << "\n";
    cout << round(kltd*100)/100 << "\n";
    cout << round(klmtra*100)/100 << "\n";
    cout << round(klmt*100)/100 << "\n";
    cout << round(klst*100)/100 << "\n";
    cout << round(klst*100)/100 << "\n";
    return 0;
}

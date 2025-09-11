#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,h,s,sl;
    cin >> a >> h;
    b = a/2;
    s = (a+b)*h/2;
    sl = s/100*64.5;
    cout << fixed << setprecision(2) << s << "\n" << sl << "\n";
    return 0;
}

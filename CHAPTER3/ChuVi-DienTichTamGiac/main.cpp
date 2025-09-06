#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c1,c2;
    cin >> c1 >> c2;
    double ch = sqrt(c1*c1 + c2*c2);
    double cv = c1 + c2 + ch;
    double dt = c1*c2/2;
    double dc = (dt*2)/ch;
    cout << setprecision(15) << round(ch*100)/100 << "\n";
    cout << setprecision(15) << round(cv*100)/100 << "\n";
    cout << setprecision(15) << round(dt*100)/100 << "\n";
    cout << setprecision(15) << round(dc*100)/100 << "\n";
    return 0;
}

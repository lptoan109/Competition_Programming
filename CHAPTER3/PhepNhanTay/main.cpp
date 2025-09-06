#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int so1 = b/100;
    so1 = trunc(so1);
    int so2 = b/10;
    so2 = trunc(so2);
    so2 -= so1*10;
    int sot2 = b/10;
    sot2 = trunc(sot2);
    int so3 = b - sot2*10;
    int tich1 = a*so1;
    int tich2 = a*so2;
    int tich3 = a*so3;
    int tich = a*b;
    cout << tich3 << "\n" << tich2 << "\n" << tich1 << "\n" << tich;
    return 0;
}

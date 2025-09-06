#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b;
    cin >> a>> b;
    cout << setprecision(15);
    if(a!=0&&b==0) cout << round(a*a*100)/100;
        else if(a==0&&b!=0) cout << round(1.0/b*100)/100;
    if(a==0&&b==0) cout << "Hai so a va b phai khac khong!";
        else if(a!=0&&b!=0) cout << round(a/b*100)/100;
    return 0;
}

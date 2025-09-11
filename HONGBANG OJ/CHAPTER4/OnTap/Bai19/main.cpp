#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    if(a>=b&&b>=c){
        a = 2*a;
        b = 2*b;
        c = 2*c;
    }
    else{
        a=fabs(a);
        b=fabs(b);
        c=fabs(c);
    }
    cout << a << "\n" << b << "\n" << c;
    return 0;
}

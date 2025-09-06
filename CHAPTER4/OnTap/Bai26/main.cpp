#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a<=b&&b<=c&&c<=d){
        a = d;
        b = d;
        c = d;
    }
        else if(a>b&&b>c&&c>d);
            else {
                a *=a;
                b *=b;
                c *=c;
                d *=d;
            }
    cout << a << "\n" << b << "\n" << c << "\n" << d;
    return 0;
}

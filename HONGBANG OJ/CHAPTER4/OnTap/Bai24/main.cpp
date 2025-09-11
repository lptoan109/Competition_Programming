#include <iostream>

using namespace std;

int main()
{
    double x,y,z;
    cin >> x >> y >> z;
    if(x<0) x*=x;
    if(y<0) y*=y;
    if(z<0) z*=z;
    cout << x << "\n" << y << "\n" << z;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    unsigned long long d,h,m,s,t;
    cin >> d >> h >> m >> s;
    t = 86400*d + 3600*h + 60*m +s;
    cout << t;
    return 0;
}

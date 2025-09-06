#include <iostream>

using namespace std;

int main()
{
    long long s;
    cin >> s;
    long long pf = s/60;
    long long g = s/3600;
    long long p = pf - g*60;
    s -= (p*60+g*3600);
    cout << g << " gio " << p << " phut " << s << " giay ";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);
    int a,b;
    cin >> a >> b;
    cout << a+b;
    return 0;
}

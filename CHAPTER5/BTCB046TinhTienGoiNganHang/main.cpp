#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("tinhtienguinganhang.INP", "r", stdin);
    freopen("tinhtienguinganhang.OUT", "w", stdout);
    double ti,th,l,tl=0;
    cin >> ti >> l >> th;
    for(int i = 1; i<=th; ++i){
        tl += ti*(l/100);
        ti += ti*(l/100);
    }
    cout  << setprecision(19) <<  round(tl) << "\n" << round(ti);
    return 0;
}

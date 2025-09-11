#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long d=1,nn,ln,kc,tv,a,b,c;
    cin >> tv;
    while(d<=tv){
        cin >> a >> b >> c;
        ln = max({a,b,c});
        nn = min({a,b,c});
        kc = ln-nn;
        if(kc<=2) cout << 0;
        else{
            cout << (kc-2)*2;
        }
        ++d;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double tg,l,tmm,m;
    cin >> tg >> l >> tmm;
    if(tg==0||l==0){
        cout << 0;
    }
    else{
        while(tg<tmm){
            tg += tg*(l/100);
            ++m;
        }
        cout << round(m);
    }
    return 0;
}


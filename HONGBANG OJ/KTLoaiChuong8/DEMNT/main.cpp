#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
    bool snnt = true;
    if(n<2) snnt = false;
    for(int i = 2; i*i<=n; ++i){
        if(n%i==0){
            snnt = false;
            break;
        }
    }
    return snnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    freopen("DEMNT.INP", "r", stdin);
    freopen("DEMNT.OUT", "w", stdout);
    int n,a,d=0;
    cin >> a;
    for(int i=0; i<a; ++i){
        cin >> n;
        if(snt(n)) ++d;
    }
    cout << d;
    return 0;
}

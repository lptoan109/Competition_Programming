#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll h, m;
    cin >> h >> m;
    ll sophut = h*60+m;
    ll k = 0;
    while(k*720 < sophut*11){
        k++;
    }
    ll spcl = (k*720-sophut*11)/11;
    cout << spcl;
    return 0;
}

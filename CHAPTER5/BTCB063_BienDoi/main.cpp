#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k,d=0;
    cin >> k;
    while(k!=1&&k%2==0){
        if(k%6==0) k/=6;
        else k*=3;
        ++d;
    }
    if(k==1) cout << d;
    else cout << -1;
    return 0;
}

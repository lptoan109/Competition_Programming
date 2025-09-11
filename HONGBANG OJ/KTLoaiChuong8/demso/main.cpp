#include <bits/stdc++.h>
using namespace std;
bool kt(int n){
    bool ktt = false;
    if(n<10) ktt = true;
    int cscc = n%10;
    while(n>10){
        n/=10;
    }
    if(cscc==n) ktt = true;
    return ktt;
}
int main()
{
    long long l,r,d=0;
    cin >> l >> r;
    for(long long i = l; i<=r; ++i){
        if(kt(i)) ++d;
    }
    cout << d;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000005];
void nhap(ll n, ll a[]){
    for(ll i = 0; i<n; ++i){
        cin>>a[i];
    }
}
int main()
{
    ll n,s=1;
    cin >> n;
    nhap(n,a);
    sort(a, a + n, greater<ll>());
    for(ll i = 0; i<3; ++i){
        s*=a[i];
    }
    cout << s;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[20];
void nhap(int &na, ll n, int a[]){
    na = 0;
    while(n>0){
        int cs = n%10;
        a[na] = cs;
        na++;
        n/=10;
    }
}
void xuat(int na, int a[]){
    for(int i = 0; i<na; ++i){
        cout << a[i];
    }
}
void kt(ll n, int a[], int na){
    for(int i = 0; i<na; ++i){
        int ln = a[i], vt =i;
        for(int k = i; k<na; ++k){
            if(ln<a[k]){
                ln = a[k];
                vt = k;
            }
        }
    swap(a[vt], a[i]);
    }
    xuat(na,a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    freopen("SOMAX.INP", "r", stdin);
    freopen("SOMAX.OUT", "w", stdout);
    ll n;
    int na;
    cin >> n;
    nhap(na,n,a);
    kt(n,a,na);
    return 0;
}

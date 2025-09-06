#include <bits/stdc++.h>
using namespace std;
int a[10005];
void nhap(int &n, int a[]){
    n = 0;
    while(cin >> a[n]){
        n++;
    }
}
void tim(int n, int a[]){
    int ln=a[0]+ a[1], kq;
    for(int i = 0; i<n; ++i){
        kq = a[i]+a[i+1];
        if(ln<kq){
            ln = kq;
        }
    }
    cout << ln;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    freopen("MANG.INP", "r", stdin);
    freopen("KETQUA.OUT", "w", stdout);
    int n;
    nhap(n,a);
    tim(n,a);
    return 0;
}

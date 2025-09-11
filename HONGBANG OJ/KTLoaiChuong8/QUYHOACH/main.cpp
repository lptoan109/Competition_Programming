#include <bits/stdc++.h>
using namespace std;
int a[1000005], ch[1000005];
void nhap(int &n, int a[], int &h){
    cin >> n >> h;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
}
void xuat(int n, int a[]){
    for(int i = 0; i<n; ++i){
        cout << a[i] << " ";
    }
}
void kt(int n, int a[], int h){
    int d = 0;
    for(int i = 0; i<n; ++i){
        if(a[i]>h){
            ch[d] = i;
            ++d;
        }
    }
    cout << d << "\n";
    xuat(d,ch);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    freopen("QUYHOACH.INP", "r", stdin);
    freopen("QUYHOACH.OUT", "w", stdout);
    int n, h;
    nhap(n,a,h);
    kt(n,a,h);
    return 0;
}

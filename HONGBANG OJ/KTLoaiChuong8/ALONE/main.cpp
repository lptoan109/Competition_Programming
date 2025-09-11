#include <bits/stdc++.h>
using namespace std;
int a[10005], d[10005];
void nhap(int &n, int a[]){
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
}
void alone(int n, int a[], int d[]){
    int ln = 0, nn = INT_MAX,de=0,vt,nd=-1;
    for(int i=0; i<n; ++i){
        vt = a[i];
        d[vt] +=1;
        if(vt > nd) nd = vt;
    }
    for(int i = 1; i<=nd; ++i){
        if(d[i]==1){
            if(i>=ln) ln=i;
            if(i<=nn) nn = i;
            ++de;
        }
    }
    if(de<1) cout <<-1;
    else cout << de << " " << nn << " " << ln;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    freopen("ALONE.INP", "r", stdin);
    freopen("ALONE.OUT", "w", stdout);
    int n;
    nhap(n,a);
    alone(n,a,d);
    return 0;
}

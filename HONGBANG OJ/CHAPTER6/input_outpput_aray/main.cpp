#include <bits/stdc++.h>
using namespace std;
int a[1000],na,i=1;

void nhapmangbt(int& n){
    cin >>n;
    for(int i = 1;i <=n;++i){
        cin >> a[i];
    }
}
void xuatmangbt(int n){
    for(int i = 1;i <=n;++i){
        cout << a[i];
    }
}
void nhapmangkbt(){
    while(cin>>a[i++]);
}
void xuatmangkbt(){
    while(cout<<a[i++]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("ip_ot_ar.INP","r",stdin);
    freopen("in_ot.OUT","w",stdout);
    int n;
    //nhapmangbt(n);
    //xuatmangbt(n);
    nhapmangkbt();
    xuatmangkbt();
    return 0;
}

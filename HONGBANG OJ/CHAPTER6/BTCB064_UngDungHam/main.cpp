#include<bits/stdc++.h>
using namespace std;
void Nhap(int &m,int &n){
    cin>>m>>n;
}
bool KTChiaHet(int m, int n){
    if(n%m==0)  return Yes;
    else cout<<"No";
    cout << "\n";
    if(m%n==0)  cout << "Yes";
    else cout<<"No";
    cout << "\n";
}
bool KTSNT(int n){
    if (n <= 1) cout << "No" << "\n";
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return cout << "No" << "\n";
        }
    }
    cout << "Yes" << "\n";
}
void XuatSNT(int m,int n){
    int d;
    for(int a = m;a<=n;++a){
        for (int i = 2; i * i <= n; ++i) {
            if (a % i == 0) {
                cout << a << "\n";
            }
        }
        cout << d;
    }
}
int main(){
    int m,n;
    Nhap(m,n);
    KTChiaHet(m,n);
    KTSNT(m);
    XuatSNT(m,n);
}

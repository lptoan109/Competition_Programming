#include <bits/stdc++.h>
using namespace std;
double ma[105*105], mt[105][105];
void nhap(int &m, int &n){
    n = 0;
    string temp;
    while(getline(cin, temp)){
        m = 0;
        double so;
        stringstream s (temp);
        while (s>>so){
            mt[n][m] = so;
            m++;
        }
        n++;
    }
}
void mtma(int m, int n, int &f){
    for(int i = 0; i<n; ++i){
        for(int k = 0; k<m; ++k{
            ma[f] = mt[i][k];
            f++;
        }
    }
}
void xuatma(int m, int f){
    for(int i = 1; i<f; ++i){
        if(i%m==0) cout << ma[i] << "\n";
        else cout << ma[i] << " ";
    }
}
void xuatmt(int m, int n){
    for(int i = 0; i<n; ++i){
        for(int k = 0; k<m; ++k){
            cout << mt[n][m] << " ";
        }
        cout << "\n";
    }
}
void mttangtheodong(int m, int f){
    cout << "Cau f: ma tran tang theo dong\n";
    sort(ma, ma + f);
    xuat(m,f);
}
void mtgiamtheocot(int m, int n){
    cout << "Cau g: ma tran giam theo cot\n";
    for(int i = 0; i<n; ++i){

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    freopen("BTCB085.INP", "r", stdin);
    cin.tie(0); cout.tie(0);
    freopen("BTCB085.OUT", "w", stdout);
    int m,f;
    nhap(m,f);
    mtma(m,n,f);
    mttangtheodong(m,f);
    cout << "\n" << "\n";

    return 0;
}

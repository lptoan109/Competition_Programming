#include <bits/stdc++.h>
using namespace std;
double mt[105][105];
void nhap(int &n, int &m, char &k, int &vt, int &sl){
    cin >> n >> m;
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cin >> mt[i][j];
        }
    }
    cin >> k >> vt >> sl;
}
void xuat(int n, int m){
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
}
void xoa(int n, int m, char k, int vt, int sl){
    if(k == 'D'){
        int i = vt;
            for(int j = 0; j<=m; ++j){
                mt[i][j] = mt[i+sl][j];
            }
            n-=sl;
    }
    if(k == 'C'){
        int j = vt;
            for(int i = 0; i<n; ++i){
                mt[i][j] = mt[i][j+sl];
            }
            m-=sl;
    }
    xuat(n,m);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB089.INP", "r", stdin);
    freopen("BTCB098.OUT", "w", stdout);
    int n,m,vt,sl;
    char k;
    nhap(n,m,k,vt,sl);
    xoa(n,m,k,vt,sl);
    return 0;
}

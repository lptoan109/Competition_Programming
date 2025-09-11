#include <bits/stdc++.h>
using namespace std;
double mt[100][100];
int mvt[2][10000];
void nhap(int &n, int &m, double &x){
    cin >> n >> m;
    for(int d = 0; d<n; ++d)
        for(int c = 0; c<m; ++c)
            cin >> mt[d][c];
    cin >> x;
}
void tim(int n, int m, double x){
    int de = 0;
    for(int d = 0; d < n; ++d)
        for(int c = 0; c<m; ++c){
            if(mt[d][c]==x){
                de++;
                mvt[0][de] = d;
                mvt[1][de] = c;
            }
        }
    cout << "Cau d: Tim phan tu\n";
    if(de<1) cout << "No";
    else{
        cout << "Phan tu " << x << " xuat hien " << de << " lan trong ma tran\n";
        cout << "Tai cac vi tri: ";
        for(int i = 1; i<=de; ++i){
            if(i < de) cout << "[" << mvt[0][i] << "][" << mvt[1][i] << "],";
            else cout << "[" << mvt[0][i] << "][" << mvt[1][i] << "]";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB083.INP", "r", stdin);
    freopen("BTCB083.OUT", "w", stdout);
    int n , m;
    double x;
    nhap(n,m,x);
    tim(n,m,x);
    return 0;
}

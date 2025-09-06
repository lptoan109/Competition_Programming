#include <bits/stdc++.h>
using namespace std;
double mt[100][100];
int mvtl[2][100000], mvtn[2][100000];
void nhap(int &n, int &m){
    cin >> n >> m;
    for(int d = 0; d<n; ++d){
        for(int c= 0; c<m; ++c){
            cin >> mt[d][c];
        }
    }        
}
void tim(int n, int m){
    double ln = 1e-18, nn = 1e18;
    int dn = 0, dl = 0;
    for(int d = 0; d<n; ++d){
        for(int c=0; c<m;++c){
            if(mt[d][c]>ln) ln = mt[d][c];
            if(mt[d][c]<nn) nn = mt[d][c];
        }
    }
    for(int d = 0; d<n; ++d){
        for(int c= 0; c<m; ++c){
            if(mt[d][c]==ln){
                dl++;
                mvtl[0][dl] = d;
                mvtl[1][dl] = c;
            }
            if(mt[d][c]==nn){
                dn++;
                mvtn[0][dn] = d;
                mvtn[1][dn] = c;
            }
        }
    }
    cout << "Cau c: Tim phan tu max, min, cho biet vi tri\n";
    cout << "Phan tu max: " << ln << "\n";
    cout << "Xuat hien tai vi tri: ";
    for(int i = 1; i<=dl; ++i){
        if(i<=dl-1) cout << "[" <<mvtl[0][i] <<"][" << mvtl[1][i] << "], ";
        else cout << "[" <<mvtl[0][i] <<"][" << mvtl[1][i] << "]";
    }
    cout << "\nPhan tu min: " << nn << "\n";
    cout << "Xuat hien tai vi tri: ";
    for(int i = 1; i<=dn; ++i){
        if(i<=dn-1) cout << "[" <<mvtn[0][i] <<"][" << mvtn[1][i] << "], ";
        else cout << "[" <<mvtn[0][i] <<"][" << mvtn[1][i] << "]";
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cout.tie(0); cin.tie(0);
    //freopen("BTCB082.INP", "r", stdin);
    //freopen("BTCB082.OUT", "w", stdout);
    int n , m;
    nhap(n,m);
    tim(n,m);
    return 0;
}

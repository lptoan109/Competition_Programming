#include <bits/stdc++.h>
using namespace std;
double mt[196][196];
void nhap(int &n, int &m, double &ln, double &nn){
    n = 0;
    string temp;
    while(getline(cin, temp)){
        m = 0;
        double so;
        stringstream s (temp);
        while (s>>so){
            mt[n][m] = so;
            ln = max(so,ln);
            nn = min(so,nn);
            m++;
        }
        n++;
    }
}
void xuat(int n, int m){
    cout << "Cau e: Ma tran sau khi thay the:\n";
    for(int d = 0; d<n;++d){
        for(int c = 0; c<m; ++c){
            cout << mt[d][c] << " ";
        }
        cout << "\n";
    }
}
void thay(int n, int m, double ln, double nn){
    double tb=(ln+nn)/2;
    for(int d = 0; d<n;++d){
        for(int c = 0; c<m; ++c){
            if(ln==mt[d][c]){
                mt[d][c] = tb;
            }
            if(nn==mt[d][c]){
                mt[d][c] = tb;
            }
        }
    }
    xuat(n,m);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB084.INP", "r", stdin);
    freopen("BTCB084.OUT", "w", stdout);
    int n,m;
    double ln=-DBL_MAX,nn=DBL_MAX;
    nhap(n,m,ln,nn);
    thay(n,m,ln,nn);
    return 0;
}

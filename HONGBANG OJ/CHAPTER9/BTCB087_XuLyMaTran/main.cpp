#include <bits/stdc++.h>
using namespace std;
double mt[105][105], ma[105*105];
void nhap(int &n, int &m){
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cin >> mt[i][j];
        }
    }
}
void xuatma(int na){
    for(int i = 0; i<na; ++i){
        cout << ma[i] << " ";
    }
}
void xuatmt(int n, int m){
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
}
void luuramang(int n, int m){
        int j = 1,na;
        na = 0;
        for(int i = 0; i<m; ++i){
            ma[na] = mt[i][i];
            na++;
        }
        for(int i=0; i<n; ++i){
            ma[na] = mt[i][m-j];
            na++;
            j++;
        }
        xuatma(na);
}
void doicho(int n, int m){
        double ln;
        for(int i = 0; i<n; ++i){
            ln = -DBL_MAX;
            for(int j = 0; j<m; ++j){
                if(mt[i][j]>ln){
                    ln = mt[i][j];
                }
            }
            for(int j = 0; j<m; ++j){
                if(mt[i][j]==ln){
                    swap(mt[i][i], mt[i][j]);
                    break;
                }
            }
        }
        xuatmt(n,m);
}
void sapxep(int n, int m){
    double mt1[105][105];
    for(int i = 0; i<n; ++i)
        for(int j = 0; j<m; ++j){
            mt1[i][j] = mt[i][j];
        }
    double nn;
    for(int j = 0; j<m; ++j){
        nn = DBL_MAX;
        for(int i = j; i<m; ++i){
            if(mt[i][i]<nn)
                nn = mt[i][i];
        }
        for(int i = 0; i<m; ++i){
            if(mt[i][i]==nn){
                swap(mt[i][i], mt[j][j]);
                break;
            }
        }
    }
    int j = 1,q=1;
    double ln;
    for(int k = 0; k<m; ++k){
        ln = -DBL_MAX;
        for(int i = k; i<m; ++i){
            if(mt[i][m-j]>ln)
                ln = mt[i][m-j];
            j++;
        }
        j = 1;
        for(int i = 0; i<m; ++i){
            if(mt[i][m-j]==ln)
                swap(mt[i][m-j], mt[k][m-q]);
            j++;
        }
        q++;
    }
    if(n/2!=0){
        if(mt[n/2-1][n/2-1]>mt[n/2][n/2]||mt[n/2][n/2]>mt[n/2+1][n/2+1]){
            for(int i = 0; i<n; ++i)
                for(int j = 0; j<m; ++j){
                    mt[i][j] = mt1[i][j];
                }
        }
    }
    xuatmt(n,m);
}
void tongtamgiactren(int n, int m){
    double s = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < m; ++j) {
            s += mt[i][j];
        }
    }
    cout << s;
}
void mangsongsong(int n, int m){
        int d = n-2, c = 0, ld = d, lc = c, na;
        ma[0] = mt[n-1][0];
        for(na = 1; na<(n*m)-1; ++na){
            if(d==0) break;
            ma[na] = mt[d][c];
            d++; c++;
            if(d>=n){
                ld--; lc = 0;
                d = ld; c = lc;
            }
        }
        d = 0, c = 1, ld = d, lc = c;
        for(; na<(n*m)-m; ++na){
            ma[na] = mt[d][c];
            d++; c++;
            if(c>=m){
                ld=0; lc++;
                d = ld; c = lc;
            }
        }
        xuatma(na);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB087.INP", "r", stdin);
    freopen("BTCB087.OUT", "w", stdout);
    int n,m;
    nhap(n,m);
    if(n!=m) cout << "No\n\nNo\n\nNo\n\nNo\n\nNo";
    else{
        luuramang(n,m);
        cout << "\n" << "\n";
        doicho(n,m);
        cout << "\n";
        sapxep(n,m);
        cout << "\n";
        tongtamgiactren(n,m);
        cout << "\n" << "\n";
        mangsongsong(n,m);
    }
    return 0;
}

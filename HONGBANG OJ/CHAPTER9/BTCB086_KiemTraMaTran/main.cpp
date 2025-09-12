#include <bits/stdc++.h>
using namespace std;
double mt[105][105];
void nhap(int &n, int &m){
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            cin >> mt[i][j];
        }
    }
}
bool dx1(int n, int m){
    if(n!=m && n<1 && m<1) return false;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j){
            if(mt[i][j]!=mt[j][i]) return false;
        }
    }
    return true;
}
bool dx2(int n, int m){
    if(n!=m && n<1 && m<1) return false;
    for (int i = m-2; i > 0; --i) {
        for (int j = m-1; j > i; --j){
            if(mt[i][j]!=mt[n-1-j][m-1-i]) return false;
        }
    }
    return true;
}
bool dcc(int n, int m){
    if(n!=m && n<1 && m<1) return false;
    for(int i=0; i<m; ++i){
        if(mt[i][i]!=0) return false;
        if(mt[i][n-1-i]!=0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB086.INP", "r", stdin);
    freopen("BTCB086.OUT", "w", stdout);
    int n, m;
    nhap(n,m);
    bool l1 = dx1(n,m), l2=dx2(n,m), dc=dcc(n,m);
    if(l1==false&&l2==false&&dc==false) cout << 0;
    else{
        if(l1) cout << 1 << " ";
        if(l2) cout << 2 << " ";
        if(dc) cout << 3 << " ";
    }
    return 0;
}

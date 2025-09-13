#include <bits/stdc++.h>
using namespace std;
double mt[105][105];
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
bool doixungtam(int n, int m){
        for(int i = 0; i<n/2; ++i){
            for(int j = 0; j<m; ++j){
                if(mt[i][j]!=mt[n-1-i][m-1-j]) return false;
            }
        }
        return true;
}
bool latinh(int n, int m){
    if(n!=m) return false;
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            if(mt[i][j]<1) return false;
        }
    }
    for(int i = 0; i<n; ++i){
        int dd[n+1]={}, dc[m+1]={};
        for(int j = 0; j<m; ++j){
            if(dd[int(mt[i][j])]==1) return false;
            else dd[int(mt[i][j])]=1;
            if(dc[int(mt[j][i])]==1) return false;
            else dc[int(mt[j][i])]=1;
        }
    }
    return true;
}
bool maphuong(int n, int m){
    if(n!=m) return false;
    int dd[n*m]={};
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            if(mt[i][j]<1) return false;
            if(dd[int(mt[i][j])]==1) return false;
            else dd[int(mt[i][j])] == 1;
        }
    }
    double sc = 0, sd = 0, sdcc = 0, sdcp = 0;
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            sc += mt[i][j];
        }
        for(int j = 0; j<m; ++j){
            sd += mt[j][i];
        }
        for(int j = 0; j<m; ++j){
            sdcc += mt[j][j];
        }
        for(int j = 0; j<m; ++j){
            sdcp += mt[j][m-1-j];
        }
        if(sc!=sd!=sdcc!=sdcp) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB088.INP", "r", stdin);
    freopen("BTCB088.OUT", "w", stdout);
    int n,m;
    nhap(m,n);
    if(doixungtam(n,m)==true) cout << 1 << "\n";
    else cout << 0 << "\n";
    if(latinh(n,m)==true) cout << 1 << "\n";
    else cout << 0 << "\n";
    if(maphuong(n,m)==true) cout << 1 << "\n";
    else cout << 0 << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
double mt1[105][105], mt2[105][105];
void nhap(int &n1, int &n2, int &m1, int &m2){
    n1 = 0;
    string temp;
    while(getline(cin, temp)){
        m1 = 0;
        double so;
        stringstream s (temp);
        while (s>>so){
            mt1[n1][m1] = so;
            m1++;
        }
        n1++;
    }
    n2 = 0;
    while(getline(cin, temp)){
        m2 = 0;
        double so;
        stringstream s (temp);
        while (s>>so){
            mt2[n2][m2] = so;
            m2++;
        }
        n2++;
    }
}
void xuat(int n1, int n2, int m1, int m2){
    for(int i = 0; i<n1; ++i){
        for(int j = 0; j<m1; ++j)
            cout << mt1[i][j] << " ";
    cout << "\n";
    }
    for(int i = 0; i<n2; ++i){
        for(int j = 0; j<m2; ++j)
            cout << mt2[i][j] << " ";
    cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB093.INP", "r", stdin);
    freopen("BTCB088.OUT", "w", stdout);
    int n1, n2, m1, m2;
    nhap(n1,n2,m1,m2);
    xuat(n1,n2,m1,m2);
    return 0;
}

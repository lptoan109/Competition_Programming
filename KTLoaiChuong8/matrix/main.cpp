#include <bits/stdc++.h>
using namespace std;
const int nm = 105;
double mt[nm][nm];
int d,c;
void nhap(){
    cin >> d >> c;
    for(int i = 0; i<d;++i){
        for(int k = 0; k<c; ++k){
            cin >> mt[i][k];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout)
    return 0;
}

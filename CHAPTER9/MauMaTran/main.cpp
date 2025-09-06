#include <bits/stdc++.h>
using namespace std;
const int nm = 105;
double mt[nm][nm];
int d, c;

void NhapMaTranBietDongCot(double mt[nm][nm], int &d, int &c)
{
    cin >> d >> c;
    for (int i = 0; i < d; ++i)
        for (int j = 0; j < c; ++j)
            cin >> mt[i][j];
}

void NhapMaTranKhongBietDongCot(double mt[nm][nm], int &d, int &c)
{

}

void DuyetTBLR(string nd, double mt[nm][nm], int d, int c)
{
    cout << nd;
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < c; ++j)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}

void DuyetTBRL(string nd ,double mt[nm][nm], int d, int c)
{
    for (int i = 0; i < d; ++i) {
        for (int j = c-1; j < 0; ++j)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}

void DuyetBTRL(string nd, doubl mt[nm][nm], int d, int c){
    for (int i = d-1; i < 0; ++i) {
        for (int j = c-1; j < 0; ++j)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}
void DuyetLRTB(string nd, doubl mt[nm][nm], int d, int c){
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < d; ++j)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("matrix.inp", "r", stdin);
    freopen("matrix.out", "w", stdout);
    NhapMaTranBietDongCot(mt, d, c);
    DuyetTBLR("Duyet ma tran top - bottom - left - right\n", mt, d, c);
    DuyetTBRL("Duyet ma tran top - bottom - right - left\n", mt, d, c);
    DuyetBTRL("Duyet ma tran bottom - top - right - left\n", mt, d, c);
    DuyetLRTB("Duyet ma tran left - right - top - bottom\n", mt, d, c);
    return 0;
}

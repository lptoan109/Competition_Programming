#include <bits/stdc++.h>
using namespace std;
double ma[105*105], mt[105][105];
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
void mtma(int m, int n, int &f){
    f=0;
    for(int i = 0; i<n; ++i){
        for(int k = 0; k<m; ++k){
            ma[f] = mt[i][k];
            f++;
        }
    }
}
void xuatma(int m, int f){
    for(int i = 0; i<f; ++i){
        if((i+1)%m==0) cout << ma[i] << "\n";
        else cout << ma[i] << " ";
    }
}
void xuatmt(int m, int n){
    for(int i = 0; i<n; ++i){
        for(int k = 0; k<m; ++k){
            cout << mt[i][k] << " ";
        }
        cout << "\n";
    }
}
void mttangtheodong(int m, int f){
    cout << "Cau f: ma tran tang theo dong\n";
    sort(ma, ma + f);
    xuatma(m,f);
}
void mtgiamtheocot(int m, int n, int f){
    cout << "Cau g: ma tran giam theo cot\n";
    sort(ma,ma+f, greater<double>());
    f=0;
    for(int i = 0; i<m; ++i)
        for(int j = 0; j<n; ++j){
            mt[j][i] = ma[f];
            f++;
        }
    xuatmt(m,n);
}
void mttangdantheoduongcheochinh(int m, int n, int f){
    if(m!=n) cout << "No";
    else{
        sort(ma,ma+f);
        cout << "Cau h: ma tran tang theo duong cheo chinh\n";
            long long idx = 0;
        long long top = 0, bottom = n-1;
        long long left = 0, right = m-1;
        while(idx < n*m) {
            for(long long j = left; j <= right && idx < n*m; j++) mt[top][j] = ma[idx++];
            top++;
            for(long long i = top; i <= bottom && idx < n*m; i++) mt[i][right] = ma[idx++];
            right--;
            for(long long j = right; j >= left && idx < n*m; j--) mt[bottom][j] = ma[idx++];
            bottom--;
            for(long long i = bottom; i >= top && idx < n*m; i--) mt[i][left] = ma[idx++];
            left++;
        }
    }
}
void xoan_oc(int n, int m, int f)
{
    sort(ma,ma+f);
    long long idx = 0;
    long long top = 0, bottom = n-1;
    long long left = 0, right = m-1;
    while(idx < n*m) {
        for(long long j = left; j <= right && idx < n*m; j++) mt[top][j] = ma[idx++];
        top++;
        for(long long i = top; i <= bottom && idx < n*m; i++) mt[i][right] = ma[idx++];
        right--;
        for(long long j = right; j >= left && idx < n*m; j--) mt[bottom][j] = ma[idx++];
        bottom--;
        for(long long i = bottom; i >= top && idx < n*m; i--) mt[i][left] = ma[idx++];
        left++;
    }
    cout << "Cau h: ma tran xoan oc tu ngoai vao trong\n";
    xuatmt(m,n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("BTCB085.INP", "r", stdin);
    //freopen("BTCB085.OUT", "w", stdout);
    int m,f,n;
    nhap(m,n);
    mtma(m,n,f);
    mttangtheodong(m,f);
    cout << "\n" << "\n";
    mtgiamtheocot(m,n,f);
    cout << "\n" << "\n";
    mttangdantheoduongcheochinh(m,n,f);
    cout << "\n" << "\n";
    xoan_oc(n,m,f);
    return 0;
}

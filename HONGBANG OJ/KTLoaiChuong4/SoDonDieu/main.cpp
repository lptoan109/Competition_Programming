#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int dv,c,t,ng;
    double kq2;
    long long kq1;
    int ddt,ddg;
    dv = n % 10;
    c = (n/10)%10;
    t = (n/100)%10;
    ng = n/1000;
    if(n<100){
        ng = 9;
        t = 9;
    }
    if(n<1000){
        ng = 9;
    }
    if(ng<=t&&t<=c&&c<=dv){
        ddt = 1;
    }
    else if(ng>t&&t>c&&c>dv){
        ddg = 1;
    }
    if(ddt==1||ddg==1){
        kq1 = n*n;
        cout << setprecision(15) << kq1;
    }
    else{
        kq2 = sqrt(n);
        cout << round(kq2);
    }
    return 0;
}

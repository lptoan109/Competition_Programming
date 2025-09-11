#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,x;
    cin >> a >> b;
    if(a==0&&b==0) cout << "vo so nghiem";
    if(a==0&&b!=0) cout << "vo nghiem";
    if(a!=0){
        x = -b/a;
        cout << setprecision(15) << round(x*100)/100;
        }
    return 0;
}

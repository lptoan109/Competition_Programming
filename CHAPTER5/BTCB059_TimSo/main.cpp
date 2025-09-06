#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m,n,d=0;
    cin >> m >> n;
    for(long long a = m;a<=n;++a){
        for(long long b = m;b<=n;++b){
            double kq = sqrt(a*a+b*b);
            if(kq==round(kq)){
                cout << a*a <<" + "<<b*b<<" = "<<kq << "\n";
                ++d;
            }
        }
    }
    cout << d;
}

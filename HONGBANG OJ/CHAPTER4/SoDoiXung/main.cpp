#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dv,c,t,ng;
    if(n<10) cout << "YES";
        else if(n<100){
            dv = n%10;
            c = n/10;
            if(dv==c) cout << "YES";
            else cout << "NO";
        }
            else if(n<1000){
                dv = n %10;
                t = n/100;
                if(dv==t) cout << "YES";
                else cout << "NO";
            }
                else if(n<10000){
                    ng = n /1000;
                    t = (n/100)%10;
                    c = (n/10)%10;
                    dv = n%10;
                    if(ng==dv&&c==t) cout << "YES";
                    else cout << "NO";
                }
    return 0;
}

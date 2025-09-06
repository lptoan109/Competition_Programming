#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long bcnn = (a * b);
    while(b != 0){
        long long t = b;
        b = a % b;
        a = t;
    }
    long long ucln = a;
    bcnn /= ucln;
    cout << ucln << "\n";
    cout << bcnn;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    for(long long i=sqrt(n);i>=1;--i){
        if(n%i==0){
            if(n/i>i) cout << n/i << " " << i;
                else cout << i <<" " << n/i;
        break;
        }
    }
    return 0;
}

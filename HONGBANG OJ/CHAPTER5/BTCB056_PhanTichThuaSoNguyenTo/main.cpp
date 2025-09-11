#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long so;
    cin >> so;
    cout << so << " = ";
    if(so == 1){
        cout << so << " ";
    }
    else{
    for(long long i = 2; i*i <= so; ++i){
        while (so % i == 0){
            cout << i << " ";
            so /= i;
        }
    }
    if(so > 1)cout << so << " ";
    }
    return 0;
}

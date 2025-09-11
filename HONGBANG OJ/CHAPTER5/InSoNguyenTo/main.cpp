#include <iostream>

using namespace std;

int main()
{
    long long n,d=0;
    cin >> n;
    for(long long k = 2;k<=n;++k){
        bool check = true;
        for(long long i = 2;i*i<=k;++i){
            if(k%i==0){
                check = false;
                break;
            }
        }
        if(check){
            cout << k << " ";
            ++d;
        }
    }
    cout << "\n" << d;
    return 0;
}

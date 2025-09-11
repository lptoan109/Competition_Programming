#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n==0) cout << " ";
    else {
        for(long long i=1;i<=n;++i){
            for(long long j = 0; j<i;++j){
                cout << (i+j)%10;
            }
            for(long long a=i-2;a>=0;--a){
                cout << (i+a)%10;
            }
            cout << "\n";
        }
    }
    return 0;
}

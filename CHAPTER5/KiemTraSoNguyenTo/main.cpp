#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    bool check = true;
    if(n<2) check = false;
    else{
        for(long long i = 2;i*i<=n;++i){
            if(n%i==0){
                check = false;
                break;
            }
        }
    }
        if(check) cout << "Yes";
            else cout << "No";
    return 0;
}

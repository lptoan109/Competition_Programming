#include <iostream>

using namespace std;

int main()
{
    long long pd,n;
    cin >> n;
    if(n==0){
        cout << 0 << " " << 0;
    }
    else{
    while(n>0){
        pd = n%5;
        n /=5;
        cout << n << " " << pd << "\n";
    }
    }
    return 0;
}

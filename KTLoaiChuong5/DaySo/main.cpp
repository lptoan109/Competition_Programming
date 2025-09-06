#include <iostream>

using namespace std;

int main()
{
    unsigned long long x,kq=0; unsigned int k,d=1,cs;
    cin >> x >> k;
    cout << x << " ";
    while(d<k){
        while(x>0){
            cs = x%10;
            kq += cs*cs;
            x/=10;
        }
        cout << kq << " ";
        x = kq;
        ++d;
        kq = 0;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long m,n,k;
    cin >> m >> n >>k;
    long long cnm = (m-n)/2;
    long long cnbavb = m-cnm;
    long long cnb = cnbavb/(k+1);
    long long cnba = cnb*k;
    cout << cnba << " " << cnm << " " << cnb;
    return 0;
}

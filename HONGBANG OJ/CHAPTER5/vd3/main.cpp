#include <iostream>

using namespace std;

int main()
{
    long long n,s;
    cin >> n;
    for(long long i=1;i<=n;i++)
        s+=i;
    cout << s;
    return 0;
}

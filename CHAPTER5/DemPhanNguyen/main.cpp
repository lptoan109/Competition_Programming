#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    do
    {
        long long dem = 0;
        cin >> n;
        if (n == -27) cout << 2 << "\n";
        else
        {
            n = fabs(n);
            if (n < 1 && n >= 0)
            {
            cout << 1 << "\n";
            }
            else if (n != 27)
            {
                while (n >= 1)
                {
                n /= 10;
                dem++;
                }
            cout << dem << "\n";
            }
            else
            {
            cout << " ";
            }
        }

    }
    while (n != 27);
    return 0;
}

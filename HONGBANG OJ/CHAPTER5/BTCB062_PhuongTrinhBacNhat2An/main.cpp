#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d = 0;
    cin >> a >> b >> c;
    long long x = 0, y = 0;
    if(a == 0 && b == 0 && c != 0) cout << "No";
        else if((a == 0 || b == 0) && c == 0) cout << "Yes";
            else if(c % a != 0 && c % b != 0) cout << "No";
                else if(c % a == 0 && c % b == 0) cout << "Yes";
                    else{


                        cout << d;
                    }
    return 0;
}

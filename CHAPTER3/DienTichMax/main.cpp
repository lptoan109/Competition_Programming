#include <bits/stdc++.h>

using namespace std;

int main()
{
    double cv;
    cin >> cv;
    double c = cv/4;
    c *= c;
    cout << setprecision(15) << round(c*100)/100;
    return 0;
}

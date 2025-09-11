#include <bits/stdc++.h>

using namespace std;

int main()
{
    double bmi,kg,m;
    cin >> kg >> m;
    bmi = kg/(m*m);
    cout << setprecision(15) << round(bmi*100)/100 << "\n";
    if(bmi<18.5) cout << "G";
        else if(bmi<25) cout << "BT";
            else if(bmi<30) cout << "HB";
                else if(bmi<35) cout << "B1";
                    else if(bmi<40) cout << "B2";
                        else cout << "B3";
    return 0;
}

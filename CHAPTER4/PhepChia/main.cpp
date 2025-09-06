#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;
    if(b!=0){
         double c = a/b;
        cout << setprecision(15) << round(c*100)/100;
    }
    else{
        cout << "No";
    }
    return 0;
}

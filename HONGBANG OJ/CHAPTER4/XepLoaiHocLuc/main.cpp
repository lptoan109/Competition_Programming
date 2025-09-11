#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ten,hk;
    double v,to,a,l,h,ti;
    getline(cin,ten);
    cin >> v >> to >> a >> l >> h >> ti;
    cin >> hk;
    double dtb = (v*2+to*2 + a + l + h + ti)/8.0;
    cout << setprecision(15) << round(dtb*10)/10 << "\n";
    if(dtb>=5&&v>=3.5&&to>=3.5&&a>=3.5&&l>=3.5&&h>=3.5&&ti>=3.5){
        if(hk == "T"||hk=="K")
            cout << "DAU"<<"\n";
        else cout << "ROT"<<"\n";
    }
    else cout << "ROT" << "\n";
    if(dtb>=8&&v>=6.5&&to>=6.5&&a>=6.5&&l>=6.5&&h>=6.5&&ti>=6.5&&hk == "T")
        cout << "5000000";
    else cout << "NO";
    return 0;
}

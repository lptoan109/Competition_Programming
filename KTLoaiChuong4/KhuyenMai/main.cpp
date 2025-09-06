#include <bits/stdc++.h>

using namespace std;

int main()
{
    string lkm;
    long long stpd,stkm;
    cin >> lkm >> stpd;
    if(lkm == "b"){
        if(stpd>500000){
            stkm = stpd - (stpd*5/100);
            cout << setprecision(15) << stkm;
        }
        else if(stpd<500000) cout << stpd;
    }
    if(lkm == "t"){
        if(stpd<250000) cout << stpd;
        else if(stpd>=250000&&stpd<=500000){
            stkm = stpd - (stpd*5/100);
            cout  << stkm;
        }
        else if(stpd>500000){
            stkm = stpd - (stpd*10/100);
            cout << setprecision(15) << stkm;
        }

    }
    if(lkm == "v"){
        if(stpd<100000) cout << stpd;
        else if(stpd>=100000&&stpd<=200000){
            stkm = stpd - (stpd*5/100);
            cout << stkm;
        }
        else if(stpd>200000&&stpd<=300000){
            stkm = stpd - (stpd*10/100);
            cout  << stkm;
        }
        else if(stpd>300000&&stpd<=500000){
            stkm = stpd - (stpd*15/100);
            cout  << stkm;
        }
        else if(stkm>500000){
            stkm = stpd - (stpd*20/100);
            cout << setprecision(15) << stkm;
        }
    }
    return 0;
}

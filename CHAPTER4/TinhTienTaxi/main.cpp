#include <bits/stdc++.h>
using namespace std;
int main(){
    double qd,t;
    cin >> qd;
    if(qd<=0.3) t = 5000;
    else {
        t = 5000;
        qd -=0.3;

        if(qd<=1.7) t += qd*17400;
        else{
        t += 17400*1.7;
        qd -=1.7;

            if(qd<=8) t += qd*13100;
            else{
                t += 8*13100;
                qd -= 8;

                if(qd<=15) t += qd * 14400;
                else {
                    t += 15 * 14400;
                    qd -= 15;
                    t += qd * 12000;
                }
            }
        }
    }
    cout << setprecision(15) << round(t);
    return 0;
}

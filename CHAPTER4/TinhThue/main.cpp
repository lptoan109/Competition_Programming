#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long tien,thue;
    cin >> tien;
    double t5 = 5.0/100;
    double t10 = 10.0/100;
    double t15 = 15.0/100;
    double t20 = 20.0/100;
    double t25 = 25.0/100;
    double t30 = 30.0/100;
    double t35 = 35.0/100;
    if(tien<5000000) thue=0;
        else if(tien==5000000) thue= tien*t5;
            else if(tien<=10000000) thue= tien*t10;
                else if(tien<=18000000) thue= tien*t15;
                    else if(tien<=32000000) thue= tien*t20;
                        else if(tien<=52000000) thue= tien*t25;
                            else if(tien<=80000000) thue= tien*t30;
                                else thue= tien*t35;
    cout << thue;
    return 0;
}

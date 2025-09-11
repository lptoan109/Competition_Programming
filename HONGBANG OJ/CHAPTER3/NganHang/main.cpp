#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long tien;
    cin >> tien;
    long long tt = tien%10000;
    long long t500 = trunc(tien/500000);
    tien-= t500*500000;
    long long t200 = trunc(tien/200000);
    tien -= t200*200000;
    long long t100 = trunc(tien/100000);
    tien -= t100*100000;
    long long t50 = trunc(tien/50000);
    tien -= t50*50000;
    long long t20 = trunc(tien/20000);
    tien-= t20*20000;
    long long t10 = trunc(tien/10000);
    cout << setprecision(15);
    cout << t500 << " to " << 500000 << "\n";
    cout << t200 << " to " << 200000 << "\n";
    cout << t100 << " to " << 100000 << "\n";
    cout << t50  << " to " << 50000 << "\n";
    cout << t20  << " to " << 20000 << "\n";
    cout << t10 << " to " << 10000 << "\n";
    cout << "con lai: " << tt;
    return 0;
}

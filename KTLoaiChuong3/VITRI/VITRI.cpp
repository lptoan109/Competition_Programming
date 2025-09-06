#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s,v1,v2;
    cin >> s >> v1 >> v2;
    long long t1 = s/v1*3600;
    long long  t2 = s*1000/v2;
    long long  gt2 = t2/3600;
    long long pt2 = t2%3600/60;
    long long st2 = t2%3600%60;
    double tgn = s*1000/(v1/3.6+v2);
    double am = v1*(tgn/3600);
    double bm = (v2*3.6)*(tgn/3600);
    cout << t1 << " giay" << "\n";
    cout << gt2 << " gio " << pt2 << " phut " << st2 << " giay" << "\n";
    cout << setprecision(15) << round(tgn*100)/100 << " giay" <<"\n";
    cout << fixed << setprecision(4) << am << " km" << " - " << bm << " km";
    return 0;
}

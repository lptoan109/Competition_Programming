#include <bits/stdc++.h>

using namespace std;

int main()
{
    double s,v1,v2;
    cin >> s >> v1 >> v2;
    int t1 = round(s/v1*3600);
    int t2 = round(s*1000/v2);
    double gt2 = t2/3600;
    double pt2 = t2/60 - gt2*60;
    int st2 = t2%60;
    double tgn = s*1000/(v1/3.6+v2);
    double sg1 = v1*(tgn/3600);
    double sg2 = (v2*3.6)*(tgn/3600);
    cout << t1 << " giay" << "\n";
    cout << gt2 << " gio " << pt2 << " phut " << st2 << " giay" << "\n";
    cout << setprecision(15) << round(tgn*100)/100 << " giay" <<"\n";
    cout << fixed << setprecision(4) << sg1 << " km " << sg2 << " km";
    return 0;
}

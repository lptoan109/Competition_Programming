    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        double s,t;
        cin >> s >> t;
        double v = s/t;
        cout << setprecision(15) << round(v*100)/100 << "\n";
        double sv = v/3.6;
        cout << setprecision(15) << round(sv*100)/100;
        return 0;
    }

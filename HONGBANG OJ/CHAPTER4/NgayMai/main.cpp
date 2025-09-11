#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, t, n;
    cin >> d >> t >> n;

    int ngayTrongThang;
    switch (t) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngayTrongThang = 31;
            break;
        case 4: case 6: case 9: case 11:
            ngayTrongThang = 30;
            break;
        case 2:
              if(n%100==0){
            if(n%400==0)
                ngayTrongThang = 29;
            else ngayTrongThang = 28;
        }
        else {
            if(n%4==0)
                ngayTrongThang = 29;
            else ngayTrongThang = 28;
        }
            break;
        default:
            cout << "Thang khong hop le\n";
            return 0;
    }

    d++;
    if (d > ngayTrongThang) {
        d = 1;
        t++;
        if (t > 12) {
            t = 1;
            n++;
        }
    }

    cout << d << "/" << t << "/" << n << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string t;

    if (n < 0 || n > 10000) {
        cout << "So khong hop le!\n";
    }
    if (n == 0) {
        cout << "khong\n";
    }
    else if (n == 10000) {
        cout << "muoi ngan\n";
    }

    int nghin = n / 1000;
    int tram = (n / 100) % 10;
    int chuc = (n / 10) % 10;
    int donvi = n % 10;

    switch(nghin)
    case 9:
        t +="chin ngan";
        break;
    case 8:
        t+="tam ngan";
        break;
    case 7:
        t+="bay ngan";
        break;
    case 6:
        t+="sau ngan";
        break;
    case 5:
        t+="nam ngan";
        break;
    case 4:
        t+="bon ngan";
        break;
    case 3:
        t+="ba ngan";
        break;
    case 2:
        t+="hai ngan";
        break;
    case 1:
        t+="mot ngan";
        break;
    switch(tram)
    case 9:
        t+="chin tram";
        break;
    case 8:
        t+="tam tram";
        break;
    case 7:
        t+="bay tram";
        break;
    case 6:
        t+="sau tram";
        break;
    case 5:
        t+="nam tram";
        break;
    case 4:
        t+="bon tram";
        break;
    case 3:
        t+="ba tram";
        break;
    case 2:
        t+="hai tram";
        break;
    case 1:
        t+="mot tram";
        break;
    case 0:
        t+="khong tram";
    switch(chuc)
    case 9:
        t+="chin muoi";
        break;
    case 8:
        t+="tam muoi";
        break;
    case 7:
        t+="bay muoi";
        break;
    case 6:
        t+="sau muoi";
        break;
    case 5:
        t+="nam muoi";
        break;
    case 4:
        t+="bon muoi";
        break;
    case 3:
        t+="ba muoi";
        break;
    case 2:
        t+="hai muoi";
        break;
    case 1:
        t+="muoi";
        break;
    case 0:
        t+="le";
        break;
    switch(donvi)
    case 9:
        t+="chin";
        break;
    case 8:
        t+="tam";
        break;
    case 7:
        t+="bay";
        break;
    case 6:
        t+="sau";
        break;
    case 5:
        t+="nam";
        break;
    case 4:
        t+="bon";
        break;
    case 3:
        t+="ba";
        break;
    case 2:
        t+="hai";
        break;
    case 1:
        t+="mot";
        break;

    cout << t;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, b, e;
    cin >> b >> e;
    if (b < 7) b = 7;
    if (e > 21) e = 21;
    switch (b) {
        case 7: case 8: case 9: case 10:
            switch (e) {
                case 7: case 8: case 9: case 10: t = (e - b) * 20000;
                break;
                case 13: case 14: case 15: case 16: case 17: t = (11 - b) * 20000 + (e - 12) * 30000;
                break;
                case 19: case 20: case 21: t = (11 - b) * 20000 + 150000 + (e - 18) * 60000;
                break;
            }
        break;
        case 12: case 13: case 14: case 15: case 16: case 17:
            switch (e) {
                case 13: case 14: case 15: case 16: case 17: t = (e - b) * 30000;
                break;
                case 19: case 20: case 21: t = (17 - b) * 30000 + (e - 18) * 60000;
                break;
            }
        break;
        case 18: case 19: case 20: case 21: t = (e - b) * 60000;
        break;
    }
    cout << t;
    return 0;
}

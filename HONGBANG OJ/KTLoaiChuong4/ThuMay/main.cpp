#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long nr,n,t;
    cin>>n>>t;
    string day;
    switch(t){
    case 1: nr = n;
    break;
    case 2: nr = n+31;
    break;
    case 3: nr = n+31+28;
    break;
    case 4: nr = n+31*2+28;
    break;
    case 5: nr = n+31*2+28+30;
    break;
    case 6: nr = n+31*3+28+30;
    break;
    case 7: nr = n+31*3+28+30*2;
    break;
    case 8: nr = n+31*4+28+30*2;
    break;
    case 9: nr = n+31*5+28+30*2;
    break;
    case 10: nr  = n+31*5+28+30*3;
    break;
    case 11: nr =  n+31*6+28+30*3;
    break;
    case 12: nr = n+31*6+28+30*3;
    break;
    }
    switch(nr%7){
        case 1: day = "Tu";
        break;
        case 2: day = "Nam";
        break;
        case 3: day = "Sau";
        break;
        case 4 : day = "Bay";
        break;
        case 5: day = "Chu nhat";
        break;
        case 6: day = "Hai";
        break;
        case 0: day = "Ba";
        break;
    }
    cout << day;

}

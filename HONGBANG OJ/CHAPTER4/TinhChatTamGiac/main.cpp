#include <bits/stdc++.h>
using namespace std;
int main (){
    double a,b,c,p,s;
    cin >> a >> b >> c;
    string kq;
    p = (a+b+c)/2;
    double a2 = a*a;
    double b2 = b*b;
    double c2 = c*c;
    if(a+b>c&&a+c>b&&b+c>a){
        if(a==b&&a==c) kq ="D";
            else if(a==b||b==c||a==c) kq = "C";
                 else if(a2+b2==c2||a2+c2==b2||b2+c2==a2) kq = "V";
                    else kq = "T";
        cout << kq << "\n";
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << setprecision(15) << round(s*10000)/10000;
    }
    else cout << "NO";
}

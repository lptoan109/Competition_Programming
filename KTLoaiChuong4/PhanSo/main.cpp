#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==0&&b==0&&c==0) cout << 0;
        else if(a==0&&b==0&&d==0) cout << 0;
            else if(a==0&&c==0&&d==0) cout << 0;
                else if(b==0&&c==0&&d==0) cout << 0;
    else{
    long long sl = a;
    long long sb = a;
    if(b>sl) sl = b;
    if(c>sl) sl = c;
    if(d>sl) sl = d;
    if(b<sb) sb = b;
        if(sb==0) sb = a;
    if(c<sb) sb = c;
        if(sb==0) sb = b;
    if(d<sb) sb = d;
        if(sb==0) sb = c;
    if(sb==1) cout << sl;
        else cout << sl << " / " << sb;
    }
    return 0;
}

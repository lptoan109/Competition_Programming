#include <iostream>

using namespace std;

int main()
{
    long long s,t,n;
    s = 0;
    t = 1;
    cin >> n;
    if(n==0){
        s = 0;
        t = 0;
    }
    while(n!=0){
        if(n!=0){
            s+=n;
            t*=n;
            }
        cin >> n;
    }
    cout << s << "\n" << t;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long m,n,cs,d;
    cin >> m >> n;
    for(long long i = m;i<=n;++i){
        long long to=0,ti=1,t = i;
        while(t>0){
        cs = t%10;
        to +=cs;
        ti *=cs;
        t/=10;
        }
        if(to==ti){
            cout << i << " ";
            ++d;
        }
    }
    cout << "\n" << d;
    return 0;
}

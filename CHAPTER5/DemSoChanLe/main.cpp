#include <iostream>

using namespace std;

int main()
{
    long long l,c,n;
    c = 0; l = 0;
    do{
        cin >> n;
        if(n!=0){
        if(n%2==0)
            ++c;
        if(n%2!=0) ++l;
        }
    }
    while(n!=0);
    cout << c << "\n" << l;
    return 0;
}

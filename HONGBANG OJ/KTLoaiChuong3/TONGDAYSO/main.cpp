#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int s=0;
    for(int i; i<=n;i++)
    {
        int a=1;
        if(a%k==0){
            s+=a;
        }
        a+=1;
    }
    cout << s;
    return 0;
}

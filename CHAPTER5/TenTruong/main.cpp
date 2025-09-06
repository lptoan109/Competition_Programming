#include <iostream>

using namespace std;

int main()
{
    long long n,d;
    string nd = "HONG BANG";
    cin >> n;
    if(n<1){
        cout << " ";
    }
    else{
    cout << nd << "\n";
    for(long long i = 2; i<=n;++i){
        nd = "        " + nd;
        cout << nd << "\n";
    }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int ts,ms;
    cin >> ts >> ms;
    while(ms==0){
        cin >> ms;
    }
    cout << (ts/ms)*(ts/ms);
    return 0;
}

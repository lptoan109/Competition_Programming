#include <iostream>

using namespace std;

int main()
{
    int t=0;
    for(int i = 120;i<=6500;++i){
        if(i%3==0&&i%6!=0){
            cout << i << " ";
            ++t;
        }
    }
    cout << "\n" << t;
    return 0;
}


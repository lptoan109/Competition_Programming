#include <iostream>

using namespace std;

int main()
{
    int t1=2,t2;
    for(t2=1;t2<=9;++t2){
        while(t1<=9){
            cout << t1 << "*" << t2 << "=" << t1*t2;
            if(t1*t2<10){
                cout << "    ";
            }
            else cout << "   ";
            ++t1;
        }
        cout << "\n";
        t1=2;
    }
    return 0;
}

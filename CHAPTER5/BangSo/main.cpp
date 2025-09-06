#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i<=99 ; ++i){
        if(i<10){
            cout << i << "  ";
             if(i%10==9){
                cout << "\n";
            }
        }
        else{
            cout << i << " ";
            if(i%10==9){
                cout << "\n";
            }
        }
    }
    return 0;
}

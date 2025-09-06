#include <iostream>

using namespace std;

int main()
{
    int d = 0;
    for(int i=10;i<=9999;++i){
        if(i%6==2){
            if(i<100){
                int so1 = i/10;
                int so2 = i%10;
                int t = so1+so2;
                if(t==20){
                    cout << i << " ";
                    ++d;
                }
            }
            else if(i<1000){
                int so1 = i/100;
                int so2 = (i/10)%10;
                int so3 = i%10;
                int t = so1+so2+so3;
                if(t==20){
                    cout << i << " ";
                    ++d;
                }
            }
            else if(i<10000){
                int so1 = i/1000;
                int so2 = (i/100)%10;
                int so3 = (i/10)%10;
                int so4 = i%10;
                int t = so1 + so2 + so3 + so4;
                if(t==20){
                    cout << i << " ";
                    ++d;
                }
            }
        }
    }
    cout << "\n" << d;
    return 0;
}

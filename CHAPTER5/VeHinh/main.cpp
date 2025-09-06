#include <iostream>

using namespace std;

int main()
{
    long long c,h;
    char kt1,kt2;
    cin >> h >> c >> kt1 >> kt2;
    if(c==0||h<1||h>6){
        cout << " ";
    }
    else{
    if(h==1){
        for(long long i = 1;i<=c;++i){
            for(long long k = 1;k<=i;++k){
                cout << kt1;
            }
            cout << "\n";
        }
    }
    else if(h==2){
        for(long long i = c;i>=1;--i){
            for(long long k = 1;k<=i;++k){
                cout << kt1;
            }
            cout << "\n";
        }
    }
    else if(h==3){
       for(long long i = 1;i<=c;++i){
            for(long long k = 1;k<=i*2-1;++k){
                cout << kt1;
            }
            cout << "\n";
            }
    }
    else if(h==4){
        for(long long j=1;j<=c;++j){
            for(long long i=1;i<=c-j;++i){
                cout << " ";
            }
            for(long long i=1;i<=j*2-1;++i){
                cout << kt1;
            }
            cout << "\n";
        }
    }
    else if(h==5){
        for(long long j=c;j>=1;--j){
            for(long long i=1;i<=c-j;++i){
                cout << " ";
            }
            for(long long i=1;i<=j*2-1;++i){
                cout << kt1;
            }
            cout << "\n";
        }
    }
    else if(h==6){
        for(long long j=1;j<=c;++j){
            for(long long i=1;i<=c-j;++i){
                cout << " ";
            }
            for(long long i=1;i<=j*2-1;++i){
                if(i%2==1){
                cout << kt1;

                }
                else cout << kt2;
            }
            cout << "\n";
        }
    }
    else cout << " ";
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    if(n==1) cout << "*";
    else{
        for(int c  = 1;c<=n;++c){
            if(c==1){
                for(int h = 1;h<=n;++h){
                    cout << "* ";
                }
                cout << "\n";
            }
            if(c>1&&c<n){
                for(int h = 1;h<=n;++h){
                    if(h==1){
                        cout << "*";
                    }
                    if(h>1&&h<n){
                        cout << "  ";
                    }
                    if(h==n){
                        cout << "*" << " ";
                    }
                }
                cout << "\n";
            }
            if(c==n){
                for(int h = 1;h<=n;++h){
                    cout << "* ";
                }
            }
        }
    }
    return 0;
}

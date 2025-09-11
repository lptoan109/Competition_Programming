#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int sb,sl,n1,n3; unsigned long long n2;
    cin >> n1 >> n2 >> n3;
    if(n1>n3){
        sl = n1;
        sb = n3;
    }
    if(n1<n3){
        sl = n3;
        sb = n1;
    }
    if(n1==0&&n3==0) cout << "Bi xanh " << n1 << " - " << "bi do " << n2 << " - " << "bi vang " << n3 << "\n";
        else if ((sl-sb) % 3 == 0){
            while((n1 + n3)!= 0){
                if(n1!=0&&n3!=0){
                    n1-=1; n3-=1;
                    n2+=2;
                    cout << "Bi xanh " << n1 << " - " << "bi do " << n2 << " - " << "bi vang " << n3 << "\n";
                }
                if(n1!=0&&n3==0){
                    n1-=1; n2-=1;
                    n3+=2;
                }
                if(n1==0&&n3!=0){
                    n3-=1; n2-=1;
                    n1+=2;
                }
            }
        }
        else cout << "No";
    return 0;
}

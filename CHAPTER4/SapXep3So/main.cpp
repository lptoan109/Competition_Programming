#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long maxi;
    long long mini;
    maxi = a;
    mini = a;
    if(b>maxi) maxi = b;
    if (c>maxi) maxi = c;
    if(b<mini) mini = b;
    if(c<mini) mini = c;
    long long mid = (a+b+c) -(maxi+mini);
    cout << maxi << "\n";
    cout << mini << "\n";
    cout << mini << " " << mid << " " << maxi << "\n";
    cout << maxi << " " << mid << " " << mini;
    return 0;
}

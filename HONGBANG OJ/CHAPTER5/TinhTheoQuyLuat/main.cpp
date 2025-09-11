#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,t=1;
    cin >> n >> x;
    double s1=0,s2=0,s3=1,s4=0,s5=1,s6=1;
    if(n==0&&x!=0){
        s1=0;s2=0;s3=0;s4=0;s5=0;s6=1;
    }
        else if(n==0&&x==0){
            s1=0;s2=0;s3=0;s4=0;s5=0;s6=0;
        }
    else{
    if(n%2!=0){
        for(int i=1;i<=n;i+=2){
            s1 +=i;
        }
    }
    else if(n%2==0){
        for(int i=1;i<n;i+=2){
           s1 +=i;
        }
    }
    for(int i = 1;i<=n;++i){
        s2 += i*i;
        s3 *=i;
        s4 +=1/(i*(i+1));
        s5 *= 1+1/i*i;
        t *= i;
        s6*=x;
    }
    s6/=t;
    }
    cout << setprecision(15);
    cout << round(s1*100)/100 << "\n" << round(s2*100)/100 << "\n" << round(s3*100)/100 << "\n" << round(s4*100)/100 << "\n" << round(s5*100)/100 << "\n" << round(s6*100)/100;

}

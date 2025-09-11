#include <iostream>

using namespace std;

int main()
{
    long long x,y;
    cin >> x >> y;
    string t;
    if(x>0&&y>0) t = "TH1";
    if(x<0&&y>0) t = "TH2";
    if(x<0&&y<0) t = "TH3";
    if(x>0&&y<0) t ="TH4";
    if(x!=0&&y==0) t ="TH5";
    if(x==0&&y!=0) t ="TH6";
    if(x==0&&y==0)t ="TH7";
    cout << t;
    return 0;
}

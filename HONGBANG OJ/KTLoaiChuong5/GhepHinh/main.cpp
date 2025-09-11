#include <iostream>

using namespace std;

int main()
{
    long long a,b,ca,sl,dt,dtn;
    cin >> a >> b;
    dt = a*b;
    dtn = dt;
    if(a<10||b<10){
        cout << 0 << "\n" << 0 << "\n" << dtn;
    }
    else{
        for(int c=20;c>=10;--c){
            long long sla,slb,tdt;
            sla = a/c;
            slb = b/c;
            tdt = sla*slb*c*c;
            if((dt-tdt)<dtn){
                dtn = dt - tdt;
                ca = c;
                sl = sla*slb;
            }
        }
        cout << ca << "\n" << sl << "\n" << dtn;
    }
    return 0;
}

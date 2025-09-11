#include <iostream>

using namespace std;

int main()
{
    string ten;
    getline( cin, ten);
    int namhientai, namsinh;
    cin >> namsinh >> namhientai;
    int tuoi = namhientai - namsinh;
    cout << "Ban " << ten << " nam nay" << tuoi << " tuoi";
    return 0;
}

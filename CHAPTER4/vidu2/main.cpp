    #include <iostream>

using namespace std;

int main()
{
    double tb;
    cin >> tb;
    if(tb>=8) cout << "GIOI";
        else if(tb>=6.5) cout << "KHA";
            else if(tb>=5) cout << "TB";
                else if(tb>=3.5) cout << "YEU";
                    else cout << "Kem";
    return 0;
}

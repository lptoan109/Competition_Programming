#include <iostream>

using namespace std;

int main()
{
    double d;
    cin >> d;
    while(d<5){
        cout << "Learn C++ programming language... \n";
        cout << "Enter your final score: ";
        cin >> d;
    }
    cout << "Congratulation! You pass the exam";
    return 0;
}

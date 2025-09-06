#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N,K;
    cin >> N >> K;
    long long m = N / K;
    long long sum = K * m * (m + 1) / 2;

    cout << sum << endl;

    return 0;
}

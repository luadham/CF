#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, x, y, sum = 0;
    cin >> n >> a >> x >> y;
    
    if (n <= a) {
        sum = n * x;
    } else {
        sum = a * x + (n - a) * y;
    }

    cout << sum << endl;
    return 0;
}
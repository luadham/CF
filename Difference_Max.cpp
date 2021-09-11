#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    x = max(a , b);
    y = min(c, d);
    cout << x - y << endl;
    return 0;
}
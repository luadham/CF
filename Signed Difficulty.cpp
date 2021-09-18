#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

typedef long long ll;

using namespace std;

int main() {
    fast;
    double number;
    cin >> number;
    int x, y;
    x = number;
    y = (number - x) * 10;
    if (y <= 2) cout << x << '-' << endl;
    else if (y <= 6) cout << x << endl;
    else cout << x << '+' << endl;
    return 0;
}
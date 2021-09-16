#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np, drink, limes, salt;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    drink = (k * l) / (n * nl);
    limes = (c * d) / n;
    salt = p / (np * n);

    cout << min(drink, min(limes, salt)) << endl;
    return 0;
}
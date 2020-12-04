#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    freopen("in.txt" , "r" , stdin);

    int k, n;
    ll w;
    cin >> k >> n >> w;
    for (ll i = 1; i <= w; i++) n -= (k*i);
    if (n < 0) cout << abs(n) << endl;
    else cout << 0 << endl;
    return 0;
}

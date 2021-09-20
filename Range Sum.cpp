#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

typedef long long ll;

using namespace std;

int main() {
    fast;
    int tsc;
    cin >> tsc;
    ll l, r, r1, r2, maxx, minn;
    while (tsc--)
    {
        cin >> l >> r;
        if (l == r) cout << 0 << endl;
        else {
            maxx = max(l, r);
            minn = min(l, r);
            minn -= 1;
            r1 = (minn * (minn + 1)) / 2;
            r2 = (maxx * (maxx + 1)) / 2;
            cout << r2 - r1 << endl;
        }
    }
    
    return 0;
}
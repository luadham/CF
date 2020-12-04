#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    //freopen("in.txt" , "rt" , stdin);
    int tsc;
    cin >> tsc;
    while (tsc--) {
        ll n;
        cin >> n;
        if (n <= 2) cout << 0 << endl;
        else {
            if (n & 1) cout << n/2 << endl;
            else cout << (n-1) / 2 << endl;
        }
    }
    return 0;
}

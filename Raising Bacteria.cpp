#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    //freopen("in.txt" , "rt" , stdin);
    int n , ans = 0;
    cin >> n;
    while (n != 0) {
        if (n&1) {
            n -= 1;
            ans++;
        }
        n /= 2;
    }

    cout << ans << endl;
    return 0;
}

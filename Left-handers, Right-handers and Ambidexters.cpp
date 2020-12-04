#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    //freopen("in.txt" , "rt" , stdin);
    int l , r , a;
    cin >> l >> r >> a;

    while (a > 0) {
        if (l < r) l++;
        else r++;
        a--;
    }

    cout << min(l,r) * 2 << endl;
    return 0;
}

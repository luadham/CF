#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;


int main(){
    _AdHam;

    int n, ans = 0;
    cin >> n;
    multiset<ll> ms;
    ll h = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        h += x;
        ans++;
        ms.insert(x);
        if (h < 0) {
            h -= *ms.begin();
            ms.erase(ms.begin());
            ans--;
        }
    }

    cout << ans << '\n';


    return 0;
}
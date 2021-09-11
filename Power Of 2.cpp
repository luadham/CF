#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;

using namespace std;

void powerOfTwo(ll n) {
    vector<ll> vec;
    while (n > 0) {
        vec.push_back(n % 2);
        n /= 2;
    }
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == 1) cout << i << " ";
    }
    cout << endl;
}
int main() {
    ll n;
    cin >> n;
    powerOfTwo(n);
    return 0;
}

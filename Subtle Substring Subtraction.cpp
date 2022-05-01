#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define T int T; cin >> T; while(T--) go()
#define sz(x) (int) x.size()
#define vec vector

typedef long long ll;

using namespace std;

int x, y;
const int N = 1e5 + 1;

int getInt(char c1) {
    return (c1 - 'a') + 1;
}

void go() {
    ll alice = 0, bob = 0;
    string winner = "Alice";
    string s;
    cin >> s;
    int n = sz(s);
    ll total = 0;

    for (int i = 0; i < n; i++) {
        total += getInt(s[i]);
    }

    if (n == 1) bob += getInt(s[0]), winner = "Bob";
    else if (n & 1) {
        if (getInt(s[0]) > getInt(s[n - 1])) {
            bob = getInt(s[n - 1]);
        }
        else {
            bob = getInt(s[0]);
        }
        alice = total - bob;
    }
    else {
        alice = total;
    }

    cout << winner << " " << abs(alice - bob) << endl;
}

int main(){
    _AdHam;
    T;
    return 0;
}
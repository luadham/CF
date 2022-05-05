#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define T int T; cin >> T; while(T--) go();
#define sz(x) (int) x.size()
#define vec vector

typedef long long ll;

using namespace std;

int x, y;
const int N = 1e5 + 2;
int l , r;
char type;
int index;
map<int, int> mp;

void go() {
    cin >> type >> index;
    if (type == 'L') {
        if (mp.size() == 0) {
            l = r = 0;
        }
        else
            l--;
        mp[index] = l;
    }
    else if (type == 'R') {
        if (mp.size() == 0) {
            l = r = 0;
        }
        else
            r++;
        mp[index] = r;
    }
    else {
        int ans = min(mp[index] - l, r - mp[index]);
        cout << ans << endl;
    }
}

int main(){
    _AdHam;
    T;
    return 0;
}
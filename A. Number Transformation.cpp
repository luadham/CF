#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define T int T; cin >> T; while(T--) go()
#define sz(x) (int) x.size()
#define vec vector

typedef long long ll;

using namespace std;

int x, y, z;
const int N = 1e5 + 2;


void go() {
    int x, y;
    cin >> x >> y;
    if (y % x != 0) {
        cout << 0 << " " << 0 << endl;
    }
    else {
        cout << 1 << " " << y / x << endl;
    }
}


int main(){
    _AdHam;
    T;
    return 0;
}
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
    int n, m, k;
    cin >> n >> m >> k;
    vec<ll> arr(N + 2), op, query, opPrefix(N + 2), queryPrefix(N + 2), L(N + 2), R(N + 2), D(N + 2);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= m; i++) {
        cin >> L[i] >> R[i] >> D[i];
    }

    for (int i = 1; i <= k; i++) {
        cin >> x >> y;
        opPrefix[x]++, opPrefix[y + 1]--;
    }

    for (int i = 1; i <= m; i++) {
        opPrefix[i] += opPrefix[i - 1];
    }

    for (int i = 1; i <= m; i++) {
        D[i] *= opPrefix[i];
        queryPrefix[L[i]] += D[i];
        queryPrefix[R[i] + 1] -= D[i];
    }

    for (int i = 1; i <= n; i++) {
        queryPrefix[i] += queryPrefix[i - 1];
    }


    for (int i = 1; i <= n; i++) {
        cout << queryPrefix[i] + arr[i] << " ";
    }
    cout << endl;
}


int main(){
    _AdHam;
    go();
    return 0;
}
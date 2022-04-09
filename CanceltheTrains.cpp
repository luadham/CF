#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

int main(){
    _AdHam;
    int tsc;
    cin >> tsc;
    while (tsc--) {
        int n, m;
        vec<int> b;

        int ans = 0;
        cin >> n >> m;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b.push_back(x);
        }
        
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (binary_search(b.begin(), b.end(), x)) ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}
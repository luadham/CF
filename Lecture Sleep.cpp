#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define T int T; cin >> T; while(T--) go();
#define sz(x) (int) x.size()
#define vec vector

typedef long long ll;

using namespace std;

int x, y;
const int N = 1e5 + 2;
ll arr[N];
ll prefix[N];

void go() {
    int n, k, sum = 0;
    cin >> n >> k;
    vec<int> arr(N), awake(N), prefix(N);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> awake[i];
        if (awake[i]) {
            sum += arr[i];
        }
        else {
            prefix[i] = arr[i];
        }
        prefix[i] += prefix[i - 1];
    }

    int ans = sum;
    for (int i = 1; i <= n - k + 1; i++) {
        int val = prefix[i + k - 1] - prefix[i - 1];
        ans = max(ans, val + sum);
    }

    cout << ans << endl;

}

int main(){
    _AdHam;
    go();
    return 0;
}
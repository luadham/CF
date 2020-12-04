#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;

using namespace std;
int main() {
    fast;
    freopen("in.txt" , "rt" , stdin);
    int arr[4];
    set<int> x;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        x.insert(arr[i]);
    }
    cout << 4 - (int)x.size() << endl;
    return 0;
}

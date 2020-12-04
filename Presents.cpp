#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    //freopen("in.txt" , "rt" , stdin);
    int n;
    cin >> n;
    int arr[n] , res[n+1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        res[arr[i]] = i+1;
    }

    for (int i = 1; i <= n; i++) cout << res[i] << " ";
    cout << endl;
    return 0;
}

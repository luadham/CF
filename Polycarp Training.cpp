#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    freopen("in.txt" , "rt" , stdin);
    int n , cnt = 0;
    cin >> n;
    int arr[n];
    set<int> sn;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr , arr+n);

    int day = 1;
    for (int i = 0; i < n; i++)
        if (arr[i] >= day) {
            day++;
            cnt++;
        }


    cout << cnt << endl;

    return 0;
}

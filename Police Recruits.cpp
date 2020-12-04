#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    //freopen("in.txt" , "rt" , stdin);
    int police = 0 , n , cnt = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > 0) police += arr[i];
        else if (arr[i] == -1 && police > 0) police -= 1;
        else if (arr[i] == -1 && police == 0) cnt++;
    }

    cout << cnt << endl;
    return 0;
}

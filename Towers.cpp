#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;

using namespace std;
int main()
{
    fast;
    freopen("in.txt" , "rt" , stdin);
    int n;
    set<int> s;
    cin >> n;
    int arr[n];
    int carr[1001] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
        carr[arr[i]]++;
    }

    cout << *max_element(carr , carr+1001) << " " << s.size() << endl;

    return 0;
}

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    //freopen("in.txt" , "rt" , stdin);
    int n ,s , sum = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (n == 1) cout << 0 << endl;
    else {
        int amax = *max_element(arr, arr+n);
        for (int i = 0; i < n; i++)
            sum += (amax - arr[i]);
        cout << sum << endl;
    }


    return 0;
}

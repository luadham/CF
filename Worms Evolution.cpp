#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    //freopen("in.txt" , "rt" , stdin);
    int n , arr[1001] , flag = 0;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n && !flag; i++) {
        for (int j = 0; j < n && !flag ; j++) {
            if (i != j) {
                for (int k = 0; k < n && !flag; k++) {
                    if (j != k && k != i && arr[i] == arr[k] + arr[j]) {
                        cout << i + 1 << " " << k + 1 << " " << j + 1 << endl;
                        flag = 1;
                    }
                }
            }
        }
    }

    if (!flag) cout << -1 << endl;




    return 0;
}

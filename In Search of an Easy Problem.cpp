#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    //freopen("in.txt" , "rt" , stdin);
    int n , arr[101] , flag = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i]) {
            flag = 0;
            break;
        }
    }

    cout << (flag? "EASY" : "HARD") << endl;
    return 0;
}

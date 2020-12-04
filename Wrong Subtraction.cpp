#include <bits/stdc++.h>
using namespace std;

int main() {
    int k , n;
    cin >> k >> n;
    while (n--) {
        if (k%10) k -= 1;
        else k /= 10;
    }
    cout << k << endl;
    return 0;
}

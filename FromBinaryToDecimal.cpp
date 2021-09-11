#include <bits/stdc++.h>

using namespace std;

int convertToDecimal(string n) {
    int sum = 0, bin = 1;
    for (int i = n.size() - 1; i >= 0; i--) {
        if (n[i] == '1') {
            sum += bin;
        }
        bin *= 2;
    }
    return sum;
}

int main() {
    string n;
    cin >> n;
    cout << convertToDecimal(n) << endl; 
    return 0;
}
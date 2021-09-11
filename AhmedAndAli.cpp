#include <bits/stdc++.h>

using namespace std;


int main() {
    int numberOfOrange, aliNumber, ahmedNumber;
    cin >> numberOfOrange >> aliNumber >> ahmedNumber;
    numberOfOrange -= (aliNumber + ahmedNumber);
    cout << "the Remaining Oranges = \n" << numberOfOrange << endl;
    return 0;
}
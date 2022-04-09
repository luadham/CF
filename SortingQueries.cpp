#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

int main(){
    _AdHam;

    int Q;

    cin >> Q;

    queue<int> A;
    priority_queue<int, vector<int>, greater<>> B;

    while (Q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            A.push(x);
        } else if (type == 2) {
            if(B.empty()) {
                cout << A.front() << '\n';
                A.pop();
            } else {
                cout << B.top() << '\n';
                B.pop();
            }
        } else if (type == 3) {
            while (!A.empty()) {
                B.push(A.front());
                A.pop();
            }
        }
    }
    return 0;
}
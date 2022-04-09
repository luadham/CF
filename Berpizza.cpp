#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

int main(){
    _AdHam;
    queue<int> q;
    priority_queue<int> pq;
    int tsc;
    cin >> tsc;
    while (tsc--) {
        int ch;
        cin >> ch;
        int cnt = 1;
        if (ch == 1) {
            int m;
            cin >> m;
            pq.push(m);
            q.push(m);
        } else if (ch == 2) {
            
        } else if (ch == 3) {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
    return 0;
}
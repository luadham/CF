#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

int main(){
    _AdHam;
    int n, x, cnt = 0, i = 0;
    bool empty = true;
    vec<string> op;
    vec<int> numbers;
    set<int> st;
    string s;
    cin >> n;
    
    while (n--) {
        cin >> s;
        if (s == "removeMin") {
            if (empty) {
                op.push_back("insert");
                numbers.push_back(0);
                op.push_back("removeMin");
                cnt += 2;
                continue;
            }
            if (!st.empty()) st.erase(st.begin());
            while (i--) op.push_back("removeMin"), cnt++;
            empty = true;
        } else if (s == "insert") {
            cin >> x;
            st.insert(x);
            op.push_back("insert");
            i++;
            numbers.push_back(x);
            cnt++;
            empty = false;
        } else if (s == "getMin") {
            cin >> x;
            if (st.count(x)) {
                op.push_back("getMin");
                numbers.push_back(x);
                cnt++;
            } else {
                if (!empty) {
                    op.push_back("removeMin");
                    cnt++;
                    if (i == 1) {
                        i--;
                        empty = true;
                    }
                }
                op.push_back("insert");
                empty = false;
                i++;
                numbers.push_back(x);
                op.push_back("getMin");
                numbers.push_back(x);
                cnt += 2;
            }
        }
    }

    cout << cnt << endl;
    int j = 0;
    for (int i = 0; i < op.size(); i++) {
        if (op[i] == "removeMin") {
            cout << op[i] << endl;
            continue;
        }
        cout << op[i] << " " << numbers[j++] << endl;
    }

    return 0;
}
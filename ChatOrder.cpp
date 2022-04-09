#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

int main(){
    _AdHam;
    int n;
    
    string s;
    
    cin >> n;
    
    stack<string> stk;

    while (n--) {
        cin >> s;
        stk.push(s);
    }
    
    map<string, int> trick;

    while (!stk.empty()) {
        if (!trick[stk.top()]) {
            cout << stk.top() << endl;
            trick[stk.top()]++;
        }
        stk.pop();
    }
    
    return 0;
}
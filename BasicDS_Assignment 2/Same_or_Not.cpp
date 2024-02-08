#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    queue<int> que;
    int s, q;
    cin >> s >> q;
    if (s != q) {
        cout << "NO";
    } else {
        while (s--) {
            int x;
            cin >> x;
            st.push(x);
        }
        while (q--) {
            int x;
            cin >> x;
            que.push(x);
        }
        while (!st.empty()) {
            int x = st.top();
            int y = que.front();
            if (x != y) {
                cout << "NO";
                break;
            } else {
                st.pop();
                que.pop();
            }
        }
        if (st.empty()) {
            cout << "YES";
        }
    }

    return 0;
}

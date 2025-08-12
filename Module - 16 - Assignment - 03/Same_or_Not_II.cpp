#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    list<int> st;
    list<int> q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push_back(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push_back(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

     while (!st.empty() && !q.empty()) {
        if (st.back() != q.front()) {
            cout << "NO";
            return 0;
        }
        st.pop_back();
        q.pop_front();
    }

    cout << "YES";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n1;
    cin >> n1;
    q.push(n1);
    int n2;
    cin >> n2;
    q.push(n2);
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
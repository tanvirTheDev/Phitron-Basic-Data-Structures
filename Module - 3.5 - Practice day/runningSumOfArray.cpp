#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        int l = 0;
        int r = n - 1;
        pre[i] = pre[i - 1] + v[i];
        
    }
    
    for (auto i : pre)
    {
        cout << i << " ";
    }
    
    return 0;
}
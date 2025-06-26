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
    // prefix sum
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // suffix sum

    vector<int> suf(n);
    suf[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + v[i];
    }

    // check if equal prefix and suffix
    
    for (int i = 0; i < n; i++)
    {
        if(pre[i] == suf[i]) cout << i << " ";
    }
    
    
    return 0;
}
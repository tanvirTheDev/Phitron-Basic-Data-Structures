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

    int findIndex;
    for (int i = 0; i < n; i++)
    {
         findIndex = find(v.begin(), v.end(), v[i] + 1);
         cout << findIndex;
    }
    
    return 0;
}
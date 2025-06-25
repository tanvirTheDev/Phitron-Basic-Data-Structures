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
    // for (int i = 0; i < n; i++)   // o(n)
    // {
    //     if (v[i] > 0)  replace(v.begin(), v.end(), v[i], 1); // o(n)
    //     else if(v[i] < 0) replace(v.begin(), v.end(), v[i], 2);
    //     else if(v[i] == 0) replace(v.begin(), v.end(), v[i], 0);
 
     //* o(n*n) - o(n2)
    // }


    // optimized code - now time complexity - o(n)

    for (int i = 0; i < n; i++)
    {
    if (v[i] > 0) v[i] = 1;
    else if (v[i] < 0) v[i] = 2;
    }
    
     for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    
    return 0;
}
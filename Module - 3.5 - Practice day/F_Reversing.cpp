#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> num(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    reverse(num.begin(), num.end());
    

    for(int x : num){
        cout << x << " ";
    }
    return 0;
}
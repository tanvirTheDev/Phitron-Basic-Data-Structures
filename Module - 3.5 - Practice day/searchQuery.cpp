#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

        int found = 0;
        int leftIndex = 0;
        int rightIndex = n - 1;
    while (leftIndex <= rightIndex)
    {
        int x;
        cin >> x;
        int mid = (leftIndex + rightIndex) / 2;
        if (v[mid] == x){
            found = 1;
            break;
        }
        else if(v[mid] < x){
            leftIndex = mid + 1;
        }
        else if(v[mid] > x){
            rightIndex = mid - 1;
        }
            
    }
    if (found == 1)
    {
        cout << "found";
    }else{
        cout << "not found";
    }
 
    return 0;
}
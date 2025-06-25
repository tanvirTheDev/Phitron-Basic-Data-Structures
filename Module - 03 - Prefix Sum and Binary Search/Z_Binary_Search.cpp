#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, q;
    // cin >> n >> q;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) //? o(n)
    // {
    //     cin >> v[i];
    // }

  
    // while (q--)  //? o(n)
    // {
    //     int x; // Read the actual query value
    //     cin >> x;
    //    auto findIndex = find(v.begin(), v.end(), x); //? o(n)

    //    if (findIndex != v.end()) cout << "found" << endl;
    //    else cout << "not found" << endl;
    //    //? total time complexity = o(n*n)

    // }
    
     //* optimized code by binary search

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

        int x;
        cin >> x;
        int found = 0;
        int leftIndex = 0;
        int rightIndex = n - 1;
    while (leftIndex <= rightIndex)
    {

        int mid = (leftIndex + rightIndex) / 2;
        if (v[mid] < x)
        {
           leftIndex = mid + 1;
        }
        else if(v[mid] > x){
            rightIndex = mid - 1;
        }
        else if(v[mid] == x){
            found = 1;
            break;
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
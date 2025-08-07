#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> listData;
    int val;
    while (val != -1) {
        cin >> val;
        if (val == -1) break;
        listData.push_back(val);
    }
    
        listData.sort();
        listData.unique();
    

    for (const auto& elem : listData) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
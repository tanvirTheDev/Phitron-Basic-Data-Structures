#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    list<int> l;

    for (int i = 0; i < n1; i++)
    {
        int val;
        cin >> val;
        l.push_back(val);
    }

     for(auto it : l)
    {
        cout << it << " ";
    }
    cout << endl;

    int n2;
    cin >> n2;
    list<int> l2;

    for (int i = 0; i < n2; i++)
    {
        int val;
        cin >> val;
        l2.push_back(val);
    }

    for(auto it : l2)
    {
        cout << it << " ";
    }
   
    return 0;
}
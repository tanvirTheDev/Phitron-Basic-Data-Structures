#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v; // type - 1
    vector <int> v1(5); // type - 2, size 5, all elements initialized to 0
    vector <int> v2(5, 10); // type - 3, size 5, all elements initialized to 10
    vector <int> v3 = {1, 2 3, 4};
    vector <int> v4(v3);
    cout << "Size of vector: " << v.size() << endl; // 0
    cout << "Size of vector: " << v1.size() << endl; // 5
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " "; // prints 10 10 10 10 10
    }
    return 0;
}
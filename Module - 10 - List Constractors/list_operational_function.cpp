#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 1000, 50, 50, 50};
    myList.remove(30); // Remove all occurrences of 30
    myList.sort(); // Sort the list
    myList.unique(); // Remove consecutive duplicates, if any
    myList.reverse();
    for (auto &&i : myList) {
        cout << i << " "; // Output: 10 40 50 1000
    }

    return 0;
    return 0;
}
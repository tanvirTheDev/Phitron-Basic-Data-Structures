#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> mySet;

    // Inserting elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate element (will be ignored)

    // Displaying the elements of the set
    cout << "Elements in the set:" << endl;
    for (const auto& element : mySet) {
        cout << element << endl;
    }

    return 0;
}
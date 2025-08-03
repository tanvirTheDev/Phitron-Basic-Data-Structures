#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};
    // l.push_front(5);
    // l.push_back(60);
    // l.pop_back();
    // l.pop_front();
    cout << *next(l.begin(), 3) << endl;
    l.insert(next(l.begin(), 2), 25);
    l.erase(next(l.begin(), 3 ));
    replace(l.begin(), l.end(), 10, 400);
    auto it = find(l.begin(), l.end(), 200);
    if (it != l.end()) {
        cout << "Found: " << *it << endl;
    } else {
        cout << "Not found" << endl;
    }
    for (auto &&i : l) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
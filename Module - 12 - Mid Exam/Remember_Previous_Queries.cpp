#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    list<int> myList;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            // Insert at head
            myList.push_front(V);
        } else if (X == 1) {
            // Insert at tail
            myList.push_back(V);
        } else if (X == 2) {
            // Delete at index V 
            if (V >= 0 && V < myList.size()) {
                auto it = myList.begin();
                advance(it, V);
                myList.erase(it);
            }
        }
        cout << "L -> ";
        for (int val : myList) {
            cout << val << " ";
        }
        cout << endl;
        cout << "R -> ";
        for (auto rit = myList.rbegin(); rit != myList.rend(); ++rit) {
            cout << *rit << " ";
        }
        cout << endl;
    }

    return 0;
}

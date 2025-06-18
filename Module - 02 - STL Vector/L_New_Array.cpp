#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A, B;

    // Read A array
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.push_back(x);
    }

    // Read B array
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        B.push_back(x);
    }

    vector<vector<int>> v;
    v.push_back(B); // B comes first
    v.push_back(A); // A comes next

    vector<int> result;

    // Flatten the 2D vector into result
    for (auto row : v) {
        for (auto val : row) {
            result.push_back(val);
        }
    }

    // Print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

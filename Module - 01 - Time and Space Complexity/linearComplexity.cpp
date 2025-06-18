// linear complexity

#include <iostream>
using namespace std;    


int main()
{
    int n;
    cin >> n;
    int sum = 0;
    // Using the formula for the sum of the first n natural numbers
    sum = (n * (n + 1)) / 2; // O(1) complexity
    cout << sum << endl;

    return 0;
}
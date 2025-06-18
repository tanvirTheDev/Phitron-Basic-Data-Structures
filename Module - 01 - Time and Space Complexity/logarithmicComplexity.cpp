// logarithmic complexity
// shortcut - increment or decrement is a logarithmic operation

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 1;
    while (n > 1)
    {
        n /= 2;
        result++;
    }
    cout << result << endl;

    return 0;
}
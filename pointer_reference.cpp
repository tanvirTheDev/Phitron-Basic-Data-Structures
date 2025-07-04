#include <bits/stdc++.h>
using namespace std;

void fun(int* &p){   /// when we use &p in reference dont make new pointer.
    int y = 100;
    p = &y;
    cout << &p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    fun(p);
    cout << &p << endl;
    return 0;
}
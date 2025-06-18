#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1, 2, 3, 4, 5};
    v.push_back(6); // adds 6 at the end
    // v.pop_back(); // removes the last element 
  
    v.insert(v.begin() + 2, 10); // inserts 10 at index 2
     for(int x : v){
       cout << x << " ";
   }
    v.erase(v.begin() + 1); // removes the element at index 1
    // v.clear(); // clears the vector
    // cout << v << endl; // prints 0 after clear
    return 0;
}
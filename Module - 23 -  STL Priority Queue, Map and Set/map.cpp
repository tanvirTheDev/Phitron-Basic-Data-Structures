#include <iostream>
#include <map>
using namespace std;


int main(){
    map<string, int> myMap;

    // Inserting elements into the map
    myMap["apple"] = 1;
    myMap["banana"] = 2;
    myMap["orange"] = 3;
    myMap["banana"] = 4; // Updating value for key "banana"

    // Displaying the elements of the map
    cout << "Elements in the map:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}
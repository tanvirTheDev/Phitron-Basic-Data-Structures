#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> listData; 
    string str;

    while (true)
    {
        cin >> str;
        if (str == "end")
        {
            break;
        }
        // cout << str << " ";
        listData.push_back(str);
        
    }
    
    int query;
    cin >> query;

    auto currentIndex = listData.begin();; // to track the current index in the list

    for (int i = 0; i < query; i++)
    {
       string command;
       cin >> command;
       if(command == "visit"){
        string address;
        cin >> address;
        auto  pos = find(listData.begin(), listData.end(), address);
       
        if (pos != listData.end()) {
             currentIndex = pos;
            cout << *pos << endl;
        } else {
            cout << "Not Available" << endl;
        }

       }else if(command == "next"){
           auto next_ptr = next(currentIndex);
           if (next_ptr == listData.end()) {
              cout << "Not Available" << endl;
           } else {
               cout << *next_ptr << endl;
                currentIndex = next_ptr;
           }
          
           

       }else if(command == "prev"){
           auto prev_ptr = currentIndex;
           if (currentIndex == listData.begin()) {
               cout << "Not Available" << endl;
           } else {
                prev_ptr = prev(currentIndex);
               cout << *prev_ptr << endl;
               currentIndex = prev_ptr;
           }
       }
    }
    


    

    return 0;
}
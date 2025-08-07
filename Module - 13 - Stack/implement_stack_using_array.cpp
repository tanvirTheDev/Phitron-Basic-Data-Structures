#include <bits/stdc++.h>
using namespace std;

class Stack {
    public:
    vector<int> s;

    void push(int val){
        s.push_back(val);
    }
    void pop(){
        s.pop_back();
    }
    int top(){
        return s.back();
    }
    int size(){
        return s.size();
    }
    bool empty(){
        return s.empty();
    }
};



int main()
{
    Stack stack;
    // stack.push(10);
    // stack.push(20);
    // stack.push(30);
    // cout << stack.top() << endl; // Output: 30
    // stack.pop();
    // cout << stack.top() << endl; // Output: 20
    // if(stack.empty() == false){
    //     cout << "Stack is not empty" << endl;
    // }


    //? get the number of elements to push onto the stack
    //? and then push those elements onto the stack
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stack.push(x);
    }
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    return 0;
}
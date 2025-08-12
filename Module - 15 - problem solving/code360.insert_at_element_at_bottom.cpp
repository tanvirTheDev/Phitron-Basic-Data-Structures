#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> new_stack;
    while(!myStack.empty()){
        new_stack.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while(!new_stack.empty()){
        myStack.push(new_stack.top());
        new_stack.pop();
    }
    return myStack;
}

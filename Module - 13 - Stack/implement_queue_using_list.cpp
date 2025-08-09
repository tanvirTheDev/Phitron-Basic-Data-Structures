#include <bits/stdc++.h>
using namespace std;


class myQueue{
    public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }

    void pop(){
        l.pop_front();
    }

    int front(){
        return l.front();
    }

    int back(){
        return l.back();
    }

    bool empty(){
        return l.empty();
    }
};



int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    q.pop();
    cout << "After pop, Front: " << q.front() << endl;
    return 0;
}
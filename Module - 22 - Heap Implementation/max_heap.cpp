#include <iostream>
#include <queue>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    int val;
    cin >> val;
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
    int parent_idx = (cur_idx - 1) / 2;
    if(v[parent_idx] < v[cur_idx]) swap(v[parent_idx], v[cur_idx]);
    else break;
    cur_idx = parent_idx;
    }
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    

    return 0;
}
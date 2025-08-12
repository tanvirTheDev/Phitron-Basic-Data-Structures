class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> s;
        for(int i = sandwiches.size() - 1; i >= 0; i--)
            s.push(sandwiches[i]);
        for(int stu : students) 
            q.push(stu);
        int cnt = 0;
        while(1){
            if(s.empty())
                 break;
            if(q.front() == s.top()){
                q.pop();
                s.pop();
                cnt = 0;
            }else{
                q.push(q.front());
                q.pop();
                cnt++;
            }
              if(cnt == q.size()) break;
        }
      
        return q.size();
    }
};
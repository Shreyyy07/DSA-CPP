// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        
        stack<int>s;
        
        while(!q.empty()){
            s.push(q.front());
            q.pop();
            
        }
        while(!s.empty()){
            
            int top=s.top();
            q.push(top);
            s.pop();
        }
        return q;
    }
};
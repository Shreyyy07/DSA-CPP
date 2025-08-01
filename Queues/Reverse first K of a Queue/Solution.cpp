class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        
        stack<int>s;
        int n=q.size();
        
        if(k>n){
            return q;
        }
        
        for(int i=0; i<k; i++){
            int front=q.front();
            q.pop();
            s.push(front);
        }
        while(!s.empty()){
        int top=s.top();
        s.pop();
        q.push(top);
       
        }
        
        int leftoutEle=q.size()-k;
       for(int i=0; i<n-k; i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
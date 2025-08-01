// User function Template for C++

class Solution {
  public:
  
  void insertAtBottom(stack<int> &s,int val){
      
      if(s.empty()){
          s.push(val);
          return ;
      }
      int top=s.top();
      s.pop();
      insertAtBottom(s,val);
      s.push(top);
      
  }
  
    void Reverse(stack<int> &s) {
        
        if(s.empty()){
            return;
        }
        
        int val=s.top();
        s.pop();
        
        Reverse(s);
        insertAtBottom(s,val);
        
    }
};
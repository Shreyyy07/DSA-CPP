class Solution {
  public:
    
    void solve(stack<int>& s, int mid,int n){
        
            if(mid==(n+1)/2){
                s.pop();
                return;
            }
            int top=s.top();
            s.pop();
            
            solve(s,mid+1,n);
            s.push(top);
    }
    
    
    void deleteMid(stack<int>& s) {
        int mid=0;
        int n=s.size()-1;
        solve(s,mid,n);
    }
};
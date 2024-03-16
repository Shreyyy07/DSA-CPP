class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;  

        for(long long int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        long long int operations=0;
           while(pq.top()<k){
              long long int x=pq.top();
                pq.pop();
                long long int y=pq.top();
                pq.pop();
                operations++;
                long long int result=min(x,y)*2+max(x,y);
                pq.push(result);
                // operations++;
            }
            return operations;
    }
};
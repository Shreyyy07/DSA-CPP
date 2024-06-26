class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        int n=nums.size();
        vector<double>avg;
        sort(nums.begin(), nums.end());
        int s=0;
        int e=n-1;
        while(s<=e){
            double add=double(nums[s]+nums[e])/2;
            avg.push_back(add);
            s++;
            e--;
        }
        sort(avg.begin(),avg.end());
        return avg[0];
    }
};
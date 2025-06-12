class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        int n=arr.size();

        vector<vector<int>>ans;
        int mini=INT_MAX;
        int diff=0;

        for(int i=0; i<n-1; i++){
            diff=(arr[i+1]-arr[i]);
            mini=min(mini,diff);
        }
        for(int i=0; i<n-1; i++){
            if(arr[i+1] - arr[i]==mini){
        ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};
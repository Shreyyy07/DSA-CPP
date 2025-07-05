class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int n=arr.size();
        unordered_map<int,int>mapp;

            for(int i=0; i<n; i++){
                  mapp[arr[i]]++;
            }
            int ans=-1;
            for(auto i : mapp){
                if(i.first==i.second){
                    ans=max(ans,i.first);
                }
    }
        return ans;
    }
};
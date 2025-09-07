class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n=strs.size();
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mpp;

        for(string i:strs){
           string key=i;
           sort(key.begin(),key.end());
           mpp[key].push_back(i);
        }
        for(auto &i:mpp){
            res.push_back(i.second);
        }
        return res;
    }
};
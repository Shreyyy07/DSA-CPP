class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mapp;
        int count=0; 

        for(auto &str:arr){
            mapp[str]++;
            }

            for(auto &str:arr){
                if(mapp[str]==1){
                count++;
            }
             if(count==k){
            return str;
        }
        }
        return "";
    }
};
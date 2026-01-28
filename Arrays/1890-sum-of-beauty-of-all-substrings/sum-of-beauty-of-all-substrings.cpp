class Solution {
public:
    int beautySum(string s) {
        
        int n=s.length();
        int sum=0;

        for(int i=0; i<n; i++){
            unordered_map<char,int>freq;
            for(int j=i; j<n; j++){
                freq[s[j]-'a']++;

                int maxi=INT_MIN;
                int mini=INT_MAX;

                for(auto x:freq){
                maxi=max(maxi,x.second);
                mini=min(mini,x.second);
                }
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};
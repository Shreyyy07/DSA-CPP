class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int n=s.length();
        int m=t.length();
        if(n!=m){
            false;
        }
        unordered_map<char,int>mapp_s;
        unordered_map<char,int>mapp_te;

        for(int i=0; i<n; i++){
                
                if(mapp_s.find(s[i])==mapp_s.end()){
                    mapp_s[s[i]]=i;
                }
                if(mapp_te.find(t[i])==mapp_te.end()){
                    mapp_te[t[i]]=i;
                }
                if(mapp_s[s[i]]!=mapp_te[t[i]]){
                    return false;
                }
            }
            return true;
    }
};
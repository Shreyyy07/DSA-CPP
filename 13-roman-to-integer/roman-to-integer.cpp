class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char,int>ans;
        ans['I']=1;
        ans['V']=5;
        ans['X']=10;
        ans['L']=50;
        ans['C']=100;
        ans['D']=500;
        ans['M']=1000;

        int result=0;

        for(int i=0; i<s.length(); i++){
            if(ans[s[i]] < ans[s[i+1]]){
                result-= ans[s[i]];
            }
            else {
                result+=ans[s[i]];
            }
        }
        return result;
    }
};
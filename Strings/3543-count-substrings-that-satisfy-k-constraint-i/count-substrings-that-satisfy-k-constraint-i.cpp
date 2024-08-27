class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int left=0;
        int right=0;
        int zero=0;
        int one=0;

        int ans=0;

        for(int i=0; i<s.length(); i++){
        if(s[right]=='0'){
            zero++;
        }
        else{
            one++;
        }
        while(zero>k && one>k){
            if(s[left]=='0'){
            zero--;
        }
        else{
            one--;
        }
        left++;
        }
        ans+=(right-left+1);
        right++;
        }
        return ans;

    }
};
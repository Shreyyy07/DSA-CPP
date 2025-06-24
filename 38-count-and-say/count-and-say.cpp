class Solution {
public:
    string countAndSay(int n) {

        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }
        string s="1";
        for(int i=1; i<n; i++){
            string t="";
            int cnt=1;

            for(int j=1; j<s.length(); j++){
                if(s[j]!=s[j-1]){
                    t=t+to_string(cnt)+s[j-1];
                    cnt=1;
                }
                else{
                    cnt++;
                }
            }
            t+=to_string(cnt)+s.back();
            s=t;
        }
        return s;
    }
};
class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        char ch = 'A';
        int ascii_value = ch;

        for(int i=0; i<s.length()-1; i++){
            //  ch=s[i];
            int diff=abs(s[i]-s[i+1]);
            sum=sum+diff;
        }
        return sum;
        
    }
};
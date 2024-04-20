class Solution {
public:
    string reverseWords(string s) {
        int left=0,right=0;

        for(int i=0; i<=s.length(); i++){
        if(s[i]==' ' || i==s.length()){
            reverse(s.begin()+left,s.begin()+i);
                  left=i+1;
        }
  
        // reverse(s.begin(),s.end());
        }
        return s;
    }
};
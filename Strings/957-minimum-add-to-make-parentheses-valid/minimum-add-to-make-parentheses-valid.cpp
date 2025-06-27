class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int n=s.length();
        int cnt=0; // variable to count the opening and closing braces //
        int add=0; // varaiable for checking the status of count if cnt <0 then cnt-- // 

        for(int i=0; i<n; i++){
            if(s[i]=='('){
                cnt++;
            }
            else{
                if(cnt>0){
                    cnt--;
                }
                else{   // this shows that the cnt is less than 0 so we increment add-means we have all the barces paired till now //
                    add++;
                }
            }
        }
        add+=cnt; // here we we add all the braces count which are not paired //
        return add;
    }
};
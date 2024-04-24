class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size()!=goal.size()){
            return 0;
        }

            string ans=s.append(s);
            if(ans.find(goal)==-1){
                return 0;
            }
            else{
                return 1;
            }
    }
};
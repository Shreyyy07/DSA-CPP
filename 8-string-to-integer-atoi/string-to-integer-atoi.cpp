class Solution {
public:
    int myAtoi(string s) {
        if(s.empty())
            return 0;

        int sign = 1;
        double ans = 0; 
        int i = 0;

        // Remove leading whitespace
        while(i < s.length() && s[i] == ' '){
            i++;
        }

        // Determine sign
        if(i < s.length() && (s[i] == '+' || s[i] == '-')){
            sign = (s[i++] == '-') ? -1 : 1;
        }

        // Parse integer - converting char to integers 
        while(i < s.length() && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');
            i++;

            // Check for overflow
            if(ans * sign < INT_MIN){
                return INT_MIN;
            }
            else if(ans * sign > INT_MAX){
                return INT_MAX;
            }
            // i++;
        //     else{
        //         return ans*sign;
        // }
        }

        return (ans * sign);
    }
};

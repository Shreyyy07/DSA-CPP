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
            int digit (s[i] - '0');
            i++;

            // Check for overflow
           if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7))
                return (sign == 1) ? INT_MAX : INT_MIN;

            ans = ans * 10 + digit;
        }
        return (ans*sign);
    }
};

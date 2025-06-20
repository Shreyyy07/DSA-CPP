class Solution {
public:
    int myAtoi(string s) {

        // removing the white sapces //
        int i=0;
        while(i<s.length() && s[i]==' '){
            //  if (i == s.size()) return 0;
            i++;
        }
        // sign conversion //
        int sign=1;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }

        long ans=0;
        while(i<s.length() && s[i]>='0' && s[i]<='9'){
            // formula for converting char to number //
             ans=ans*10+(s[i]-'0');

            if(sign*ans<INT_MIN )
                return INT_MIN;
            
            if(sign*ans>INT_MAX)
                return INT_MAX;
             i++;
        }
        return (int)(sign*ans);
    }
};
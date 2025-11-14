class Solution {
public:
    int myAtoi(string s) {
        
        int n=s.length();

        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        int num=1;
        if(s[i]=='+'){
            i++;
        }
        else if(s[i]=='-'){
            num=-1;   
            i++;
        }

        long ans=0;
            while(i<n && s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
            
            if(ans*num<INT_MIN){
                return INT_MIN;

            }
            
            if(ans*num>INT_MAX){
                return INT_MAX; 
            }
            i++;
        }
        return (int)(ans*num);
    }
};
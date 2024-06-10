class Solution {
public:
    int lengthOfLastWord(string s) {

        int count=0;
        int n=s.length()-1;

        while(n>=0 && s[n]==' '){
            n--;
        }

    for(int i=n; i>=0; i--){

        if(s[i]==' '){
        break;
        }
        else{
            count++;
        }
    }
        return count;
        
    }
};
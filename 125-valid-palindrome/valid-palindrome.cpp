class Solution {
    private:
    bool validLetter(char ch){
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9'){
            return true;
        }
        return false;
    }

    char tolowerCase(char ch){
        if(ch>='a' && ch<='z' ||  ch>='0' && ch<='9'){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    
    bool checkPali(string a){
        int s=0;
        int e=a.length()-1;
        while(s<=e){
            if(a[s]==a[e]){
                s++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        
        string temp="";
        
        for(int k=0; k<s.length(); k++){
            if(validLetter(s[k])){
                temp.push_back(s[k]);
            }
        }
            // doing so that we can get only needed letters and the unnecessary alphbets are removed
           for(int k=0; k<temp.length(); k++){
            temp[k]=tolowerCase(temp[k]);
           }
           return checkPali(temp);
    }
};
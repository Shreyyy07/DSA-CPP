class Solution {
public:
    string reversePrefix(string word, char ch) {

        int index=0;
        int n=word.size();

        for(int i=0; i<n; i++){
            if(word[i]==ch){
                index=i;
                break;
            }
        }
        if(index==-1){
            return word;
        }
        reverse(word.begin(),word.begin()+index+1);
        return word;
        
    }
};
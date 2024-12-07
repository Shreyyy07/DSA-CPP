class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream s(sentence);
        string word;
        int index=1;

        while(s >> word){
            if(word.find(searchWord) == 0){
                return index;
            }
            else{
                index++;
            }
        }
        return -1;
    }
};
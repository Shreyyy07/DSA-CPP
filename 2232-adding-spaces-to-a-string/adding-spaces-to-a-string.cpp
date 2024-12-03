class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            // Check if the current index matches the next space index
            if (j < spaces.size() && i == spaces[j]) {
                result += ' ';  // Add a space before the character
                j++;
            }
            result += s[i];  // Add the current character
        }

        return result;
    }
};

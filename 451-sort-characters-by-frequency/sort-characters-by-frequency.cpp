class Solution {
public:
    string frequencySort(string s) {
        
       vector<pair<int, char>> hash('z' + 1, {0, 0});
        
        // Count frequency of each character
        for (char c : s) {
            hash[c] = {hash[c].first + 1, c};
        }

        // Sort by frequency (ascending order)
        sort(hash.begin(), hash.end());

        // Build result string in reverse order (to simulate descending frequency)
        string res = "";
        for (auto p : hash) {
            res = string(p.first, p.second) + res;
        }

        return res;
    }
};
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
      
    

      unordered_map<int,string>mapp;
      for(int i=0; i<names.size(); i++){
        mapp[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());

        for(int i=0; i<names.size(); i++){
            names[i]=mapp[heights[i]];
        }
      return names;

       
    }
};
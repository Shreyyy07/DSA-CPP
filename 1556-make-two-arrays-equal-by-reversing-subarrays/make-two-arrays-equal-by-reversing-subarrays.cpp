class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        if(target.size()!=arr.size()){
            return false;
        }
        unordered_map<int,int>targetC;
        unordered_map<int,int>arrC;

        for(int i:target){
            targetC[i]++;
        }
        for(int i:arr){
            arrC[i]++;
        }
        return targetC==arrC;

    }
};
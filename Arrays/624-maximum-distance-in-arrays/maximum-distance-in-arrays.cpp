class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int smallest=arrays[0][0];
        int largest=arrays[0].back();

        int max_dis=0;

        for(int i=1; i<arrays.size(); i++){
            max_dis=max(max_dis,abs(arrays[i].back()-smallest));
            max_dis=max(max_dis,abs(largest-arrays[i][0]));
            smallest=min(smallest,arrays[i][0]);
            largest=max(largest,arrays[i].back());
        }
        return max_dis;
    }
};
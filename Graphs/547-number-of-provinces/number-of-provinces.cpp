class Solution {
public:

void dfs(vector<vector<int>>& adjList ,int node, vector<int>&vis){
    vis[node]=1;

    for(auto i:adjList[node]){
        if(!vis[i]){
            dfs(adjList,i,vis);
        }
    }
}

    int findCircleNum(vector<vector<int>>& isConnected) {

        int v=isConnected.size();
        vector<vector<int>>adjList(v);

        // convert adj matrix into adj list //
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                if(isConnected[i][j]==1 && i!=j){
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
            }
        }
        vector<int>vis(v,0);
        int cnt=0;

        for(int i=0; i<v; i++){
            if(!vis[i]){
                cnt++;
                dfs(adjList,i,vis);
            }
        }
        return cnt;
    }
};
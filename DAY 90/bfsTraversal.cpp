#include<unordered_map>
#include<queue>
#include<list>
#include<vector>


void preparedAdjList(unordered_map<int,list<int> > &adjList,vector<pair<int,int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    
}

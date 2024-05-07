#include<unordered_map>
#include<vector>
#include<list>
#include<queue>
#include<iostream>
#include<set>

using namespace std;
class graph{
    public:
    unordered_map<int,list<int> > adj;

    void prepareAdjList(unordered_map<int,list<int> > &adjList,vector<pair<int,int> > &edges){
        for(int i=0;i<edges.size();i++){
            int u=edges[i].first;
            int v=edges[i].second;

            adj[u].push_back(v);
            adj[v].push_back(u);

        }
    }

    void bfs(unordered_map<int,list<int> > &adjList, unordered_map<int,bool> &visited,vector<int> &ans,int node)
    {
        queue<int> q;
        q.push(node);
        visited.at(node)=1;
        // q.pop();

        // ans.push_back(frontNode);

        while(!q.empty()){
            int frontNode=q.front();
            q.pop();

            ans.push_back(frontNode);
        for(auto i:adjList)
        {
            if(!visited.at(i)){
                q.push(i);
                visited.at(i)=1;

            }   
        }

        }

        // for(auto i:adjList)
        // {
        //     if(!visited[i]){
        //         q.push(i);
        //         visited[i]=1;

        //     }   
        // }

    }
    vector<int> BFS(int vertex,vector <pair<int,int> > edges){
        unordered_map<int,list<int> > adjList;
        vector<int> ans;
        unordered_map<int,bool> visited;

        prepareAdjList(adjList,edges);

        //traverse all componets

        for(int i=0;i<vertex;i++){
            if(!visited[i]){
                bfs(adjList,visited,ans,i);
            }
        }
        return ans;
    }
};

int main(){
    int m;
    cout<<"ENTER THE NUMBER OF EDGES :- ";
    cin>>m;
    
    int n;
    cout<<"ENTER THE NUMBER OF NODES :- ";
    cin>>n;

    vector<pair<int,int> > e;

    for(auto i:+)
    return 0;
}
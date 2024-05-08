#include<iostream>
#include<vector>
#include<queue>

using namespace std;


class Sol{
    public:
    vector<int> bfsOfGraph(int V,vector<int> adj[]){
        int vis[V]={0};
        vis[0]=1;

        queue<int> q;
        q.push(0);

        vector<int> bfs;

        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
return bfs;
    }
};

int main()
{
    cout<<endl;

    int V,E;
    cout<<"ENTER THE NUMBER OF NODES :- ";
    cin>>V;
    cout<<endl;

    cout<<endl<<endl;
    cout<<"ENTER THE NUMBER OF EDGES :- ";
    cin>>E;
    cout<<endl;

    vector<int> adj[V];
    cout<<endl;

    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        // adj[v].push_back(u);

    }
    cout<<endl;

    Sol s;
    vector<int> ans=s.bfsOfGraph(V,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
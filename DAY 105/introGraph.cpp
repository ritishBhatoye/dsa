#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph
{

    public:
    unordered_map<int,list<int> >  adj;

    void addEdge(int u,int v,bool direction)
    {
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }

};

int main(){

int m;
int n;
cout<<endl<<endl;
cout<<"ENTER THE NUMBER OF NODES :- ";
cin>>m;
cout<<endl<<endl;

cout<<"ENTER THE NUMBER OF EDGES :- ";
cin>>n;
//TAKING INPUT VERTICES/NODES
graph g;
for(int i=0;i<n;i++)
{
   
   int u;
   int v;

   cin>>u>>v;

   g.addEdge(u,v,0);
   
}
cout<<endl<<endl;
g.print();
cout<<endl<<endl;



    return 0;
}



void dfs(int node,vector<int> adj[],int vis[],vector<int> &ls)
{
 
     vis[node]=1;
     ls.push_back(node);
    
     for(auto i:adj[node]){
     if(!vis[i])
     {
        dfs(i,adj,vis,ls);       
     }

     }

 
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<int> adj[V];

    for(int i=0;i<E;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    int vis[V]={0};
    int start=0;
    vector<vector<int> > result;
    for(int i=0;i<V;i++){
        if(!vis[i]){
           vector<int> ls;
           dfs(i,adj,vis,ls);
           result.push_back(ls);

        }
    }




    return result;

}
#include<iostream>
using namespace std;




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
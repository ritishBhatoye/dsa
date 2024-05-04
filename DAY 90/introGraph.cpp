#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:

    unordered_map<int,list<int> > adj;

    void addEdge(int u,int v,bool direction)
    {
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printEdges(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};


int main(){
    int m;
    cout<<"ENTER THE NUMBER OF NDOES : "<<endl;
    cin>>m;
    cout<<endl;
    int n;
    cout<<"ENTER THE NUMBER OF EDGES : "<<endl;
    cin>>n;
    cout<<endl;
      
    graph g;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    cout<<endl;
    g.printEdges();
    cout<<endl;

    return 0;
}
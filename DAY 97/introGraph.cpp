#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int> > adj;

    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" , ";
            }
        }
    }
};

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF NODES :- ";
    cin>>n;
    cout<<endl<<endl;
    Graph g;
    int e;
    cout<<"ENTER THE NUMBER OF EDGES :- ";
    cin>>e;
    cout<<endl<<endl;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v,0);


    }

    cout<<endl;

    g.printAdjList();
    cout<<endl;

    return 0;

}
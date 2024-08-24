#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph
{
    public:
    unordered_map<int,list<int> > adj;

    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printGraph()
    {

        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" , ";
            }
            cout<<endl;
        }    
    }
};
int main(){


    int n;
    int m;
    cout<<endl<<endl;

    cout<<"ENTER THE NUMBER OF NODES :- ";
    cin>>n;
    cout<<"ENTER THE NUMBER OF EDGES :- ";
    cin>>m;
    cout<<endl<<endl;

    graph g;
    for(int i=0;i<m;i++)
    {
        
        int u;
        int v;
        cin>>u>>v;
        g.addEdge(u,v,0);

    }
    cout<<endl<<endl;
    g.printGraph();

    return 0;
}
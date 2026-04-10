#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class graph
{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u ,int v,bool direction)
    {
        //direction == 0; which mean it is undirected graph
        //direction == 1 ; it is directed graph

        adj[u].push_back(v);
        if(direction==0)
        {
            adj[u].push_back(u);
        }
    }

    void printAdjList()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"-> ";
            for(auto j:i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes "<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges "<<endl;

    cin>>m;
    cout<<endl<<endl;
    graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        //creating an undirected graph
        g.addEdge(u,v,0);
    }    


    cout<<endl<<endl;
    g.printAdjList();
    cout<<endl<<endl;
}
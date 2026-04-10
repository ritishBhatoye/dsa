#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class graph
{
    public:
    unordered_map<int,list<int>> adj;

    void addEdges(int u,int v,bool direction)
    {
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }

    }

    void printEdges()
    
    {
        for(auto i:adj)
        {
            cout<<i.first <<" -> ";
            for(int j:i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};


int main()
{
    cout<<endl<<endl;
    int n;
    cout<<"Enter the number of nodes :- ";
    cin>>n;
    cout<<endl<<endl;
    int m;
    cout<<"Enter the number of edges :- ";
    cin>>m;
    cout<<endl<<endl;
    graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdges(u,v,0);
    }
    cout<<"Printing the Edges :- ";
    g.printEdges();
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
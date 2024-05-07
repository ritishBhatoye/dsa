#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{

    public:
    unordered_map<int,list<int> > adj;

    void addAdj(int u,int v,bool direction){
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    } 

    void printGraph(){
        for(auto i:adj)
        {
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" , ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int m;
    cout<<"ENTER THE NUMBER OF NODES :- "<<endl;
    cin>>m;

    int n;
    cout<<"ENTER THE NUMBER OF EDGES :- "<<endl;
    cin>>n;

    cout<<endl<<endl;
    graph g;
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addAdj(u,v,0);

    }
    cout<<endl<<endl;
    g.printGraph();
    cout<<endl<<endl;


    return 0;
}
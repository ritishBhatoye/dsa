#include<iostream>
#include<queue>
#include<list>

using namespace std;


class graph{
    public:
    unordered_map<int,list<int> > adj;
    void addEdeges(int u,int v,bool direction){
        adj[u].push_back(v);

    if(direction==0){
        adj[v].push_back(u);
    }

    }
    void printAdj(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF NODE :- "<<endl;
    cin>>n;
    cout<<endl<<endl;    
    int m;
    cout<<"ENTER THE NUMBER OF EDGES :- "<<endl;
    cin>>m;
    cout<<endl<<endl;
    graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        g.addEdeges(u,v,0);

    }
    cout<<endl<<endl;
    g.printAdj();
    cout<<endl<<endl;



    return 0;
}
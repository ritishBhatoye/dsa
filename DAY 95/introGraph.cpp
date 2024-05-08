#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int,list<int> > adj;

    void addAdj(int u,int v,bool direction)
    {
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdj(){
        for(auto i:adj){
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
    cout<<endl<<endl;

    int m;
    cout<<"ENTER THE NUMBER OF NODES :- ";
    cin>>m;
    graph g;
    cout<<endl<<endl;

    int n;
    cout<<"ENTER THE NUMBER OF EDGES :- ";
    cin>>n;

    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;

        g.addAdj(u,v,0);

    }

    cout<<endl<<endl;
    g.printAdj();
    cout<<endl<<endl;


    return 0;
}
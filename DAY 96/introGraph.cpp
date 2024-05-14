#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;
class graph
{
    public:
    unordered_map<int,list<int> > adj;

    void addAdj(int u,int v, bool direction){
        adj[u].push_back(v);

        if(direction==0)
        {

            adj[v].push_back(u);

        }
    }

    void printGraphAdj(){
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
    int m;
    cout<<"ENTER THE NUMBER OF NODES :- ";
    cin>>m;
    cout<<endl<<endl;
    int n;
    cout<<"ENTER THE NUMBER OF EDGES :- ";
    cin>>n;

    graph g;

    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addAdj(u,v,0);
    }
cout<<endl;
    g.printGraphAdj();
cout<<endl;




    return 0;
}
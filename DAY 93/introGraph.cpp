#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{

    public:
    unordered_map <int,list<int> > adj;

    void addAdj(int u,int v,bool direction)
    {
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i:adj){
            cout<<i.first<<"-> ";
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
    cout<<"ENTER THE NUMBER OF NODE :- ";
    cin>>m;

    int n;
    cout<<"ENTER THE NUMBER OF EDGES :- ";
    cin>>n;

    graph g;

    for(int i=0;i<n;i++){
        int u,v;
cout<<endl;
        cin>>u>>v;
cout<<endl;

        g.addAdj(u,v,0);

    }
cout<<endl;
cout<<endl;
    g.print();

    return 0;
}
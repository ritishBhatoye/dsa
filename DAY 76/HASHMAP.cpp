#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    //creation
    unordered_map<string,int> m;

    //1- insertion 
    pair<string,int> p=make_pair("babbar",3);
    m.insert(p);
   
    //2
    pair<string,int> p2("love",2);
    m.insert(p2);
    //3
    m["mera"]=1;

    cout<<endl<<endl;

    cout<<m["mera"]<<endl;
    cout<<endl;
    // cout<<m["unknown"]<<endl;

    // cout<<m.at("unknown")<<endl;
    cout<<endl;
    cout<<m.size()<<endl;
    cout<<endl;
    cout<<m.count("love")<<endl;
    //erase
    cout<<endl;
    cout<<m.erase("love")<<endl;
    cout<<m.size()<<endl;
    m["RAHUL"]=7;
    cout<<endl;
    for(auto i:m){
        cout<<"KEY :- "<<i.first<<" "<<"VALUE :- "<<i.second<<endl;
    }
    cout<<endl<<endl;
    unordered_map<string,int> :: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    cout<<"SIZE :- "<<m.size();
    cout<<endl<<endl;
    

    return 0;
}
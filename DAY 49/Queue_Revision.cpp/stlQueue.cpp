#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<endl<<endl;
    cout<<"FRONT : "<<q.front()<<endl;
    
    cout<<"REAR  : "<<q.back()<<endl;

    cout<<endl<<endl;
    
    if(q.empty()){
        cout<<"QUEUE IS EMPTY "<<endl;
    }
    else{
        cout<<"QUEUE IS NOT EMPTY "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
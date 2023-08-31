#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    cout<<"FRONT "<<q.front()<<endl;

    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"FRONT "<<q.front()<<endl;
    cout<<"SIZE  "<<q.size()<<endl;
    q.pop();
    cout<<"FRONT "<<q.front()<<endl;
    cout<<"SIZE  "<<q.size()<<endl;



    return 0;
}
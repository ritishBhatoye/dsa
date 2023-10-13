#include<iostream>
#include<queue>
using namespace std;

void QueueReversal(queue<int> &q){
    //BASE CASE
    if(q.empty()){
        return ;
    }
    
    int num=q.front();
    q.pop();

    QueueReversal(q);
    q.push(num);

}

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
    QueueReversal(q);
    cout<<endl<<endl;
    cout<<"FRONT : "<<q.front()<<endl;
    cout<<"REAR  : "<<q.back()<<endl;
    cout<<endl<<endl;
    do{
        cout<<q.front()<<" ";
        q.pop();
    } while(!q.empty());
    return 0;
}
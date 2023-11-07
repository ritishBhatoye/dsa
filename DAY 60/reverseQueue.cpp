#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q,int size){
if(q.empty()){
    return ;
}
int num=q.front();
q.pop();
reverseQueue(q,size);
q.push(num);
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int size=q.size();
    reverseQueue(q,size);
    while(!q.empty()){
        cout<<endl;
        cout<<"FRONT : "<<q.front()<<" REAR : "<<q.back();
        cout<<endl;
        q.pop();
    }
    return 0;
}
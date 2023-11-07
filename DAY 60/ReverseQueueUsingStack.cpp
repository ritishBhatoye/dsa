#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
    int num=q.front();
    s.push(num);
    q.pop();
    }
    while(!s.empty()){
        int top=s.top();
        q.push(top);
        s.pop();
    }
}

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseQueue(q);
    while(!q.empty()){
        cout<<"FRONT : "<<q.front();
        cout<<endl;
        q.pop();
    }

    return 0;
}
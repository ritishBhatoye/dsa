#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int size,int num){
    if(s.empty()){
        s.push(num);
        return ;
    }
    int x=s.top();
    s.pop();
    insertAtBottom(s,size,num);
    s.push(x);
}

void reverseStack(stack<int> &s,int size){
    if(s.empty()){
        return ;
    }

    int num=s.top();
    s.pop();
    reverseStack(s,size);
    insertAtBottom(s,size,num);
}


int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<endl<<endl;
    int size=s.size();
    reverseStack(s,size);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<endl;

    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int size,int x){
    if(s.empty()){
        s.push(x);

        return ;
    }
    int num=s.top();
    s.pop();
    //recursive call
    insertAtBottom(s,size,x);
    s.push(num);

}

void reverseStack(stack<int> &s,int size){
    if(s.empty()){
        return ;
    }
    int num =s.top();
    s.pop();
    reverseStack(s,size);
    insertAtBottom(s,size,num);

 }


int main()
{
    cout<<endl<<endl;
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int size=s.size();
    reverseStack(s,size);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<endl;

    return 0;
}
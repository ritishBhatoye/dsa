#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int x)
{
if(s.empty()){
    s.push(x);
    return ;
}
int num=s.top();
s.pop();

//recursive call
insertAtBottom(s,x);

s.push(num);
}

void ReverseStack(stack<int> &s){
    if(s.size()==0){
        return ;
    }

    int num=s.top();
    s.pop();

    //recursive call
    ReverseStack(s);
    
    insertAtBottom(s,num);

}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<endl<<endl;
    cout<<"AFTER REVERSING THE STACK "<<endl;
    cout<<endl;
    ReverseStack(s);
    do{
        cout<<s.top()<<" ";
    s.pop();
    }while(!s.empty());
    cout<<endl<<endl;

    return 0;
}
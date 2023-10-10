#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int x)
{
//base case
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

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<endl<<endl;
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT :- "<<endl;
    int x;
    cin>>x;
    insertAtBottom(s,x);
    cout<<endl;
    do{
        cout<<s.top()<<" ";
        s.pop();
    }while(!s.empty());
    cout<<endl<<endl;
    
    return 0;
}
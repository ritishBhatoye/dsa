#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int size,int x)
{
    if(s.empty() || s.top()<x){
        s.push(x);
        return ;
    }
    int num=s.top();
    s.pop();
    insertAtBottom(s,size,x);
    s.push(num);
}
void sortStack(stack<int> &s,int size)
{
if(s.empty()){
    
    return ;
}
int num=s.top();
s.pop();
//recursive
sortStack(s,size);
insertAtBottom(s,size,num);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(1);
    s.push(3);
    s.push(5);
    cout<<endl<<endl;
    int size=s.size();
    sortStack(s,size);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<endl;
    return 0;
}
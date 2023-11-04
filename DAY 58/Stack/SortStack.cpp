#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int size,int num){
    if(s.empty() || s.top()<num){
        s.push(num);
        return ;
    }

    int x=s.top();
    s.pop();
    solve(s,size,num);
    s.push(x);
}

void sortStack(stack<int> &s,int size){
    
   if(s.empty()){
    return ;
       }
    int num=s.top();
    s.pop();
    sortStack(s,size);
    solve(s,size,num);
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(10);
    s.push(5);
    s.push(3);
    s.push(4);
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
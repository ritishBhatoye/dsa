#include<iostream>
#include<stack>
using namespace std;
void insertedStack(stack<int> &s,int num){
    if(s.empty()||(!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int x=s.top();
    s.pop();
    //recursive CALL
    insertedStack(s,num);

    s.push(x);
}
void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num=s.top();
    s.pop();
    //recursive CALL
    sortStack(s);
    
    insertedStack(s,num);
}
int main(){

    stack<int> s;
    s.push(10);
    s.push(-1);
    s.push(-7);
    s.push(3);
    s.push(5);
    cout<<endl<<endl;
    sortStack(s);
    do{
        cout<<s.top()<<" ";
        s.pop();
    }
    while(!s.empty());
    cout<<endl<<endl;

    return 0;
}
#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &s,int x){
if(s.empty()){
    s.push(x);
    return ;
}
else{
    int num=s.top();
s.pop();
pushAtBottom(s,x);
s.push(num);}
}
void reverse(stack<int> &s){
    if(s.size()>0){
        int x=s.top();
        s.pop();

        //recurssive CALL
        reverse(s);

        //push at BOTTOM
        pushAtBottom(s,x);
    }
}
void print(stack<int> &s){
    while(!s.empty()){
        cout<<"|"<<s.top()<<"|"<<endl;
        cout<<"____"<<endl;
        s.pop();
    }
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    //cout<<s.top()<<endl;
    reverse(s);
    cout<<"AFTER REVERSING STACK "<<endl;
    print(s);
    return 0;
}
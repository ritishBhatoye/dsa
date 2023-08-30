#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &s){
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
}
void sortedInsert(stack<int> &s,int x){
    if(s.empty() || (!s.empty() && s.top()<x)){
        s.push(x);
        return ;
    }

    int n=s.top();
    s.pop();
    
    //recurssive call
    sortedInsert(s,x);

    s.push(n);
}
void sortStack(stack<int> &s){
if(s.empty()){
    //base case
    return ;
}
int num=s.top();
s.pop();

//recurssive call
sortStack(s);

sortedInsert(s,num);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(40);
    s.push(1);
    s.push(8);
    // print(s);
    sortStack(s);
    print(s);
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &s){
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
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
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    print(s);

    return 0;
}
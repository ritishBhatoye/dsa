//INSERTING ELEMENT AT BOTTOM 
#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> s,int x){
    solve(s,x);
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(9);
    cout<<s.top();

    return 0;
}
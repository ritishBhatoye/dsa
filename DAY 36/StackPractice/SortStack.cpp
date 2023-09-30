//SORTING STACK
//APPROACH :-
//
#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int num){
    //Base Case
    if(s.empty()||(!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int x=s.top();
    s.pop();

    //recursive call
    insertAtBottom(s,num);

    s.push(x);
}
void sortStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    int num=s.top();
    s.pop();
    //recursive call
    sortStack(s);

    insertAtBottom(s,num);
}
int main(){ 
stack<int> s;
s.push(4);
s.push(80);
s.push(60);
s.push(50);
s.push(10);
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
#include<iostream>
#include<stack>
using namespace std;
int main(){

    //creation of stack
    stack<int> s;

    //push operation for inserting ELEMENTS
    s.push(2);
    s.push(10);

    //pop operation for deleting elements
    s.pop();

   cout<<"PRINTING TOP ELEMENT "<<s.top()<<endl;
   //check if STACK IS EMPTY
   if(s.empty()){
    cout<<"Stack is empty "<<endl;
   }
   else{
    cout<<"Stack is not empty "<<endl;
   }
   cout<<"SIZE OF STACK IS  "<<s.size()<<endl;
    return 0;
}
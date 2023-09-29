//INSERT ELEMENT AT THE BOTTOM OF STACK
#include<iostream>
#include<stack>
using namespace std;

void InsertEleAtBottom(stack<int> &s,int element){
if(s.empty()){
 s.push(element); 
 return ;  
}
int num=s.top();
s.pop();
//RECURSIVE CALL
InsertEleAtBottom(s,element);
s.push(num);
}

int main(){
stack<int> s;
s.push(10);
s.push(20);
cout<<endl<<endl;
int element;
cout<<"ENTER THE ELEMENT TO INSERT IN A STACK "<<endl;
cin>>element;
InsertEleAtBottom(s,element);
do{
    cout<<s.top()<<" ";
    s.pop(); 
}
while(!s.empty());
cout<<endl<<endl;

    return 0;
}

//ANOTHER METHOD
// #include <bits/stdc++.h> 
// void solve(stack<int>& s, int x){
// if(s.empty()){
//     s.push(x);
//     return ;
// }
// int num=s.top();
// s.pop();


// //recurssive cal
// solve(s,x);

// s.push(num);
// }
// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     solve(myStack,x);
//     return myStack;
// }

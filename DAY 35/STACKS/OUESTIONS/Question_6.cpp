#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num=s.top();
    s.pop();
    //recursive call
    insertAtBottom(s,x);
    s.push(num);
}
void ReverseStack(stack<int> &s){
if(s.empty()){
return ;
}
int num=s.top();
s.pop();
//recursive call
ReverseStack(s);

//INSERTING TOP ELEMENT AT BOTTOM
insertAtBottom(s,num);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<endl<<endl;
    // do{
        
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // while(!s.empty());
    cout<<endl<<endl;
    cout<<"AFTER REVERSING THE STACK "<<endl;
    ReverseStack(s);
    cout<<endl<<endl;
    do{
        
        cout<<s.top()<<" ";
        s.pop();
    }
    while(!s.empty());
    cout<<endl<<endl;
return 0;
}









// #include<iostream>
// #include<stack>
// using namespace std;

// void ReverseStack(stack<int> &s){
//     int num;
//      num=s.top();
//     if(!s.empty()){
      
//        s.pop();
//        return ;
//     }
//     //recursive call
//     ReverseStack(s);

//     s.push(num);
// }

// int main(){
//     stack<int> s;
//     s.push(30);
//     s.push(20);
//     cout<<endl<<endl;
//     cout<<"TOP ELEMENT IN STACK : "<<s.top()<<endl;
//     ReverseStack(s);
//     cout<<"TOP ELEMENT IN STACK : "<<s.top()<<endl;
//     cout<<endl<<endl;
// do{
//     cout<<s.top()<<" ";
//     s.pop();
// }
// while(!s.empty());
//     cout<<endl<<endl;

//     return 0;
// }
// void insertAtBottom(stack<int> &s ,int element){
// //base case
// if(s.empty()){
//     s.push(element);
//     return ;
// }
// int num=s.top();
// s.pop();

// //recurssive call
// insertAtBottom(s,element);

// s.push(num);

// }

// void reverseStack(stack<int> &stack) {
//     if(stack.empty()){
//         return ;
//     }

//     int num=stack.top();
//     stack.pop();

//     //RECURSSIVE CALL
//     reverseStack(stack);

//     insertAtBottom(stack,num);

// }

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int x){
    //base condition
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num=s.top();
    s.pop();
    //Recursive call
    insertAtBottom(s,x);

    s.push(num);
}

int main(){
  
    stack<int> s;
    s.push(4);
    s.push(60);
    s.push(50);
    s.push(41);
    s.push(30);
    int x;
    cout<<endl<<endl;
    cout<<"ENTER THE ELEMENT TO INSERT INTO STACK "<<endl;

    cin>>x;
    insertAtBottom(s,x);
     do{
        cout<<s.top()<<" ";
        s.pop();
     }
     while(!s.empty());
     
    cout<<endl<<endl;
  return 0;
}
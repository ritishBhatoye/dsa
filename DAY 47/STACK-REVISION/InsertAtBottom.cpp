#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &s,int x,int size){
    if(s.empty()){
       s.push(x);
       return ;
    }
    int num=s.top();
    s.pop();

    //recursive
    InsertAtBottom(s,x,size);

    s.push(num);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<endl<<endl;
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT : "<<endl;
    cin>>x;
    cout<<endl;
    InsertAtBottom(s,x,s.size());
    cout<<endl;
    do{
        cout<<s.top()<<" ";
        s.pop();
    }while(!s.empty());
    cout<<endl<<endl;
    return 0;
}
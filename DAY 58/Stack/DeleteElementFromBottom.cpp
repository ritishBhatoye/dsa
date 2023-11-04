#include<iostream>
#include<stack>
using namespace std;

void deleteFromBottom(stack<int> &s,int size){
    
    if(!s.empty()){
        s.pop();
        return ;
    }

    int num=s.top();
    s.pop();
    
    deleteFromBottom(s,size);
    s.push(num);
}

void insertAtBottom(stack<int> &s,int size,int num)
{    int top=s.top();
    if(s.empty()){
        s.push(num);
        return ;
    }

    int x=s.top();
    s.pop();
    insertAtBottom(s,size,num);
    s.push(x);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"DELETING ELEMENT FROM BOTTOM "<<endl;
    int size=s.size();
    int num;
    // cout<<"ENTER THE ELEMENT TO INSERT AT BOTTOM "<<endl;
    // cin>>num;
    deleteFromBottom(s,size);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}
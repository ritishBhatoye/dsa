#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int> &s,int num,int size){
    if(s.empty()){
        s.push(num);
        return ;
    }

    int x=s.top();
    s.pop();

    //recursive call
    insertAtBottom(s,num,size);

    s.push(x);

}

void reverseStack(stack<int> &s,int size){
    if(s.empty()){
        return ;
    }
    int num=s.top();
    s.pop();

    //recursive call
    reverseStack(s,size);

    insertAtBottom(s,num,size);
}

int main()
{
    stack<int> s;
    cout<<endl<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    reverseStack(s,s.size());

    cout<<endl<<endl;

    do{
        cout<<s.top()<<" ";
        s.pop();
    }while(!s.empty());
    cout<<endl<<endl;
    return 0;
}
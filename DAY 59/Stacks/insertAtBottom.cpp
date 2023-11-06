#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int size,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num=s.top();
    s.pop();
    //recursive call
    insertAtBottom(s,size,x);
    s.push(num);
}
void deleteAtBottom(stack<int> &s,int size,int count){
    if(count==size){
        s.pop();
        return ;
    }

    int num=s.top();
    s.pop();
    deleteAtBottom(s,size,count+1);
    s.push(num);

}
int main()
{
    cout<<endl<<endl;
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int size=s.size();
    insertAtBottom(s,size,9);
    deleteAtBottom(s,size,0);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl<<endl;

    return 0;
}
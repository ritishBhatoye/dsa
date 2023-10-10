#include<iostream>
#include<stack>
using namespace std;

void insertAtBottomOfStack(stack<int> &s,int size,int x){
    //base case
    if(s.top()==0){
        s.push(x);
        return ;
    }

    int num=s.top();
    s.pop();

    //recursive call
    insertAtBottomOfStack(s,size,x);

    s.push(num);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int x;
    cout<<endl<<endl;

    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT : "<<endl;
    cin>>x;

    insertAtBottomOfStack(s,s.size(),x);
     do{
         cout<<s.top()<<" ";
         s.pop();
     }while(!s.empty());
    cout<<endl<<endl;
    return 0;
}
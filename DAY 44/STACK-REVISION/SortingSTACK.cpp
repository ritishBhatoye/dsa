#include<iostream>
#include<stack>
using namespace std;

// void insertAtBottom(stack<int> &s,int x){
//     if()
//     {

//     }

// }

void insertInWaySorted(stack<int> &s,int x){
    if(s.empty() || x>s.top()){
      s.push(x);
      return ;
    }

    int num=s.top();
    s.pop();

    //recursive call
    insertInWaySorted(s,x);

    s.push(num);

}

void SortStack(stack<int> &s){
    if(s.empty()){
        return ;

    }
    int n=s.top();
    s.pop();

    //recursive call
    SortStack(s);
    insertInWaySorted(s,n);

}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(3);
    s.push(1);
    cout<<endl<<endl;
    SortStack(s);
    cout<<endl;
    do{
        cout<<s.top()<<" ";
        s.pop();
    }while(!s.empty());
    cout<<endl<<endl;

    return 0;
}
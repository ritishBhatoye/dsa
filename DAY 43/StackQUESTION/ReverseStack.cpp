#include<iostream>
#include<stack>
using namespace std;

void insertAtBottomOfStack(stack<int> &s,int x){
    if(s.empty()){
      s.push(x);
      return ;
    }

    int num=s.top();
    s.pop();

    //recursive call
    insertAtBottomOfStack(s,x);
   
    s.push(num);
}

void reverseStack(stack<int> &s){
   
    //base case
    if(s.empty())
    {
      return ;
    }
     
    //recursive call
    int num=s.top();
    s.pop();
  
    reverseStack(s);

    insertAtBottomOfStack(s,num);
}

int main(){
    
 stack<int> st;
 st.push(10);
 st.push(20);   
 st.push(30);   
 st.push(40);   
 st.push(50);   
 reverseStack(st);
 do{
    cout<<st.top()<<" ";
    st.pop();
 }
 while(!st.empty());
    return 0;

}
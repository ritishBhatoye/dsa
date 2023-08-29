#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int count,int size){
    //base CASE
    if(count==(size/2)){
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    //recurssion CALL
    solve(s,count+1,size);

    s.push(num);
}
void deleteMiddleElement(stack<int> &s,int N){
    int count=0;
    solve(s,count,N);
}

void print(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }
}
int main(){  
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
 
    deleteMiddleElement(st,st.size());
    print(st);
    return 0;
}
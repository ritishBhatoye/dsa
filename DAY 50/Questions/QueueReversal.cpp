//BRUTE FORCE
///SPACE COMPELEXITY O(n)
//USING STACK DATA STRUCTURE
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void QueueReversal(queue<int> &q){
    stack<int> st;
    
    while(!q.empty()){
        int num=q.front();
        st.push(num);
        q.pop();
    }
    
    while(!st.empty()){
        int num=st.top();
        q.push(num);
        st.pop();
    } 
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<endl<<endl;
    cout<<"FRONT : "<<q.front()<<endl;
    cout<<"REAR  : "<<q.back()<<endl;
    cout<<endl<<endl;
    QueueReversal(q);
    cout<<endl<<endl;
    cout<<"FRONT : "<<q.front()<<endl;
    cout<<"REAR  : "<<q.back()<<endl;
    cout<<endl<<endl;
    do{
        cout<<q.front()<<" ";
        q.pop();
    } while(!q.empty());
   
    return 0;
}
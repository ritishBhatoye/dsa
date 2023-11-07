#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseK_Ele(queue<int> &q,int k,int size){
    stack<int> s;
    int n=size;
    for(int i=0;i<k;i++)
    {
    int num=q.front();
    s.push(num);
    q.pop();
    
    }
    while(!s.empty()){
        int top=s.top();
        q.push(top);
        q.pop();
    }
    int t=q.size()-k;
    while(t--){
        int top=s.top();
        q.pop();
        q.push(top);
    }
}

int main(){
    cout<<endl<<endl;
  

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int size=q.size();
      int k;
        cin>>k;
     reverseK_Ele(q,k,size);
    while(!q.empty()){
        cout<<"FRONT : "<<q.front();
        cout<<endl;
        q.pop();
    }
    return 0;
}
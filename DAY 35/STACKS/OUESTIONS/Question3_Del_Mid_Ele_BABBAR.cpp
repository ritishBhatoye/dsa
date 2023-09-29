#include<iostream>
#include<stack>
using namespace std;
   void solve(stack<int> &s,int count,int size){
        if(count==(size/2)){
            s.pop();
            return ;
        }

        int num=s.top();
        s.pop();
        solve(s,count+1,size);
        s.push(num);

    }
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int count=0;
    solve(s,count,s.size());
    do{
        cout<<s.top()<<" ";
        s.pop();
    }
    while(!s.empty());
    return 0;
}
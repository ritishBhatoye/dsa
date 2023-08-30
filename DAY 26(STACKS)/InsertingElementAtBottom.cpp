//INSERTING ELEMENT AT BOTTOM 
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num=s.top();
     s.pop();
    //RECURSSIVE CALL
    solve(s,x);
    s.push(num);

}
void pushAtBottom(stack<int> &s,int x){
    solve(s,x);
}
int input(){
    int x;
    cout<<"ENTER THE ELEMENT YOU WOULD LIKE TO INSERT "<<endl;
    cin>>x;
    return x;
}

void print(stack<int> &s){
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(9);
    int x=input();
    pushAtBottom(s,x);
    cout<<"PUSHING ELEMENT AT BOTTOM "<<endl;
    print(s);

    return 0;
}
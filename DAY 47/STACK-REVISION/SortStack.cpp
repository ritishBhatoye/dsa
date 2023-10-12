#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &s,int num ,int size){
    if(  s.empty()||s.top()<num ){
        s.push(num);
        return ;
    }
    
    int x=s.top();
    s.pop();

    //recursive call
    solve(s,num,size);
    s.push(x);

}
void sortStack(stack<int> &s,int size){
    if(s.empty()){
        return ;
    }
   
   int num=s.top();
   s.pop();

   //recursive call

   sortStack(s,size);

   solve(s,num,size);
}


int main()
{
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(3);
    s.push(1);
    cout<<endl<<endl;
    sortStack(s,s.size());
    do{
        cout<<s.top()<<" ";
        s.pop();
    }while(!s.empty());
    cout<<endl<<endl;


    return 0;
}
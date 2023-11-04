#include<iostream>
#include<stack>
using namespace std;

void DeleteMidElemet(stack<int> &s,int count,int size){
    if(count==size/2){
        s.pop();
        return ;
    }

    int num=s.top();
    s.pop();
    //recursive call
    DeleteMidElemet(s,count+1,size);

    s.push(num);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int size=s.size();
    DeleteMidElemet(s,0,size);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
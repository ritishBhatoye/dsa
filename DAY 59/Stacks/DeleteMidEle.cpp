#include<iostream>
#include<stack>
using namespace std;

void DeleteMidEle(stack<int> &s,int count,int size){
    if(count==(size/2)){
        s.pop();
        return ;
    }

    int num=s.top();
    s.pop();
    DeleteMidEle(s,count+1,size);
    s.push(num);
}

int main()
{
    cout<<endl<<endl;
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int size=s.size();
    DeleteMidEle(s,0,size);
    while(!s.empty())
    {
      cout<<s.top()<<" ";
      s.pop(); 
    }
    cout<<endl<<endl;


    return 0;
}
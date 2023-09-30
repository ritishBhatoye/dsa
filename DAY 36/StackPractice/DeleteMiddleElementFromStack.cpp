//DELETING MIDDLE ELEMENT FROM STACK
//APPROACH :- USE COUNT AND ONCE COUNT ==(SIZE)/2 THEN POP() THE ELEMENT
//ELSE STORE TOP ELEMENT IN VARIABLE ,POP() IT AND MAKE RECURSIVE CALL 
//in the last PUSH the NUM ON TO STACK
#include<iostream>
#include<stack>
using namespace std;

void deleteMiddleElement(stack<int> &s,int count,int size){
    //base case
    if(count==(size/2)){
        s.pop();
        return ;
    }
    int num=s.top();
    s.pop();
    //recursive call
    deleteMiddleElement(s,count+1,size);
    s.push(num);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int c=0;
    deleteMiddleElement(s,c,s.size());
    cout<<endl<<endl;
    do{
        cout<<s.top()<<" ";
        s.pop();
    }
    while(!s.empty());
    cout<<endl<<endl;

    return 0;
}
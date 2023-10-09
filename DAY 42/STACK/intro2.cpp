#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    //PUSH OPERATION 
    void push(int element){
       if(size-top>1){ 
        top++;
        arr[top]=element;
        }
        else{
            cout<<"STACK OVERFLOW"<<endl;
        }
    }
    //POP OPERATION 
    void pop(){
        if(top>=0)
        {
        top--;
        }
        else
        {
        cout<<"STACK UNDERFLOW "<<endl;
        }
    }
    
    int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"STACK IS EMPTY "<<endl;
            return -1;
        }
    }
   bool isEmpty(){
    if(top==-1){
return true;
    }
    else{
return false;
    }
   }
};

int main()
{   Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<endl<<endl;
    cout<<"TOP ELEMENT "<<s.peak()<<endl;
    if(s.isEmpty()){
        cout<<"STACK IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK IS NOT EMPTY "<<endl;
    }
    cout<<endl<<endl;

    return 0;
}
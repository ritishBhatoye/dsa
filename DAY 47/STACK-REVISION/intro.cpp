#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;
    public:
    //CONSTRUCTOR FOR INITIALIZATION
    Stack(int size){
    this->size=size;
    top=-1;
    arr=new int[size];
    }

    //push OPERATION
    void push(int e){
        if(size-top>1){
            top++;
            arr[top]=e;
        }
        else{
            cout<<"STACK OVERFLOW "<<endl;
        }
    }

    //POP OPERATION
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW "<<endl;
        }
    }
    //TOP ELEMENT;
    int peak(){
        if(top!=-1){
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

int main(){
    cout<<endl<<endl;
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"TOP ELEMENT IS :- "<<s.peak()<<endl;
    cout<<endl;
    if(s.isEmpty()){
        cout<<"STACK IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK IS NOT EMPTY "<<endl;
    }
    cout<<endl;
    do{
        cout<<s.peak()<<" ";
           s.pop();
    }while(!s.isEmpty());
    cout<<endl<<endl;
    
    

    return 0;
}
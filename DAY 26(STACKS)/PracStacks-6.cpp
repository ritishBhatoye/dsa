#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size=size;
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"STACK OVERFLOW "<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW "<<endl;
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
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"STACK IS EMPTY"<<endl;
            return -1;
        }
    }

};
int main(){
    Stack s(5);
    s.push(10);
    cout<<s.peek()<<endl;
    return 0;
}
#include<iostream>
// #include<stack>
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
        if(size - top > 1){
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
    
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
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
    void deleteMiddleElement(){
     
    }
};

int main(){
    Stack s(40);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    return 0;
}
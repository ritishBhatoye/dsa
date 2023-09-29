#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
    //CONSTRUCTOR INITIALIZATION
    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
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
    int peakElement(){
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

int main(){
    Stack s(5);
    s.push(10);
    s.push(11);
    s.push(14);
    s.push(16);
    s.push(19);
    cout<<endl<<endl;
    
    cout<<"TOP ELEMENT : "<<s.peakElement()<<endl;
    if(s.isEmpty()){
        cout<<"STACK IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK IS NOT EMPTY "<<endl;
    }
    s.push(100);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<endl<<endl;
    return 0;
}
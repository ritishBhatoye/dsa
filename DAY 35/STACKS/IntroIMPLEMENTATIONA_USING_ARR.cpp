#include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int *arr;
    int size;

//beahivour
Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
}

    void push(int a){
        if(top==size-1){
            cout<<"STACK OVERFLOW"<<endl;
        }
        else{
            top++;
            arr[top]=a;
        }
    }
    
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"STACK UNDERFLOW"<<endl;
        }
    }
    int peakElement(){
        return arr[top];
    }
    bool isEmpty(){
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
};
int main(){
    Stack s(2);
    cout<<endl<<endl;
    s.push(10);
    s.push(3);
    s.push(4);
    cout<<"TOP ELEMENT IS : "<<s.peakElement()<<endl;
    if(s.isEmpty()==true){
        cout<<"STACK IS EMPTY"<<endl;
    }
    else{
        cout<<"STACK IS NOT EMPTY "<<endl;
    }
    s.pop();
    cout<<endl<<endl;
    cout<<"TOP ELEMENT IS : "<<s.peakElement()<<endl;
    cout<<endl<<endl;

    return 0;
}
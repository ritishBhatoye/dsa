#include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top > 1){
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
        cout<<"Stack is EMPTY "<<endl;
        return -1;
       }
    }
};
int main(){
    Stack st(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(30);

    cout<<st.peek()<<endl;
    return 0;
}
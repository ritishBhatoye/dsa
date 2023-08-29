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
            cout<<"STACK UNERFLOW "<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty "<<endl;
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
    Stack st(3);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(25);
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"STACK IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK IS NOT EMPTY "<<endl;
    }
    return 0;
}
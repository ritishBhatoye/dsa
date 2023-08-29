#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size){
        this->size=size;
        top1=-1;
        top2=size;
    }

    void push1(int element){
        if(size-top1 > 1){
            top1++;
            arr[top1]=element;
        }
        else{
            cout<<"STACK OVERFLOW "<<endl;
        }
    }
    void push2(int element){
        if(top2-top1){
            top2--;
            arr[top2]=element;
        }
        else{
            cout<<"STACK UNDERFLOW "<<endl;
        }
    }
    void pop1(){
    if(top1>=0){
        top1--;
    }
    else{
        cout<<"STACK UNDERFLOW "<<endl;
    }
    }

    void pop2(){
        if(top2)
    }
};
int main(){
    return 0;
}
#include<iostream>
using namespace std;

class Stack{
    public:
    int top1,top2;
    int size;
    int *arr;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    //PUSH 1 OPERATION 
    void push1(int element){
        if(top2-top1 > 1){
            top1++;
            arr[top1]=element;
        }
        else
        {
         cout<<"STACK OVERFLOW "<<endl;
        }
    }
    //PUSH 2 OPERATION 
    void push2(int element){
        if(top2-top1 > 1)
        {
         top2--;
         arr[top2]=element;
        }
        else{
            cout<<"STACK OVERFLOW "<<endl;
        }
    }
    void pop1(){
        if(top1>=0){
            top1--;
        }
        else{
            cout<<"STACK IS EMPTY "<<endl;
        }
    }
    void pop2(){
        if(top2<size)
        {
          top2++;
        }
        else
        {
        cout<<"STACK IS EMPTY "<<endl;
        }
    }
    
    int peak1(){
        if(top1>=0){
            return arr[top1];
        }
        else
        {
            cout<<"STACK IS EMPTY "<<endl;
        }
    }
    int peak2(){
        if(top2<size){
            return arr[top2];
        }
        else
        {
            cout<<"STACK IS EMPTY "<<endl;
        }
    }

};
int main(){

    Stack s(5);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(40);
    cout<<"PEAK ELEMENT OF STACK - 1 "<<s.peak1()<<endl;
    cout<<"PEAK ELEMENT OF STACK - 2 "<<s.peak2()<<endl;
    
    return 0;
}

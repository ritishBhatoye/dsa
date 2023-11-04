#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top1;
    int top2;
    Stack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
    //push 1
    void push1(int e)
    {
      if(top2-top1 > 1){
        top1++;
        arr[top1]=e;
      }
      else{
        cout<<"STACK-1 OVERFLOW "<<endl;
      }
    }
    //push 2
    void push2(int e){
        if(top2-top1>1){
            top2--;
            arr[top2]=e;
        }
        else{
            cout<<"STACK-2 OVERFLOW "<<endl;
        }
    }
    //pop1
    void pop1(){
        if(top1>=0){
           top1--;
        }
        else{
            cout<<"STACK-1 UNDERFLOW "<<endl;
        }
    }
    void pop2(){
        if(top2<=(size-1)){
            top2++;
        }
        else{
            cout<<"STACK-2 UNDERFLOW "<<endl;
        }
    }
    int peak1(){
        if(top1>=0){
            return arr[top1];
        }
        else{
            cout<<"STACK-1 IS EMPTY"<<endl;
            return -1;
            }
    }
     int peak2(){
        if(top2<size){
            return arr[top2];
        }
        else{
            cout<<"STACK-2 IS EMPTY"<<endl;
            return -1;
            }
    }

    bool isEmpty1(){
        if(top1==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty2(){
        if(top2==size){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack s(8);
    s.push1(10);
    s.push2(1);
    s.push1(20);
    s.push2(2);
    s.push1(30);
    s.push2(3);
    s.push1(40);
    s.push2(4);
    cout<<"TOP ELEMENT OF STACK - 1 "<<s.peak1()<<endl;
    cout<<"TOP ELEMENT OF STACK - 2 "<<s.peak2()<<endl;
    if(s.isEmpty1()){
        cout<<"STACK-1 IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK-1 IS NOT EMPTY "<<endl;
    }
    if(s.isEmpty2()){
        cout<<"STACK-2 IS EMPTY "<<endl;
    }
    else{
        cout<<"STACK-2 IS NOT EMPTY "<<endl;
    }
    return 0;
}
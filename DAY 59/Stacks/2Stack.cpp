#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top1,top2;
    
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    //push
    void push1(int e){
        if(top2-top1>1){
            top1++;
            arr[top1]=e;
        }
        else{
            cout<<"STACK-1 OVERFLOW "<<endl;
        }
    }
    void push2(int e){
        if(top2-top1>1){
            top2--;
            arr[top2]=e;
        }
        else{
            cout<<"STACK-2 OVERFLOW "<<endl;
        }
    }
    //pop
    void pop1(){
        if(top1>=0){
            top1--;
        }
        else{
            cout<<"STACK-1 UNDERFLOW "<<endl;
        }
    }
    void pop2(){
        if(top2<size){
            top2++;
        }
        else{
            cout<<"STACK-2 UNDERFLOW "<<endl;
        }
    }
    //top element
    int peak1(){
        if(top1>=0){
            return arr[top1];
        }
        else{
            cout<<"STACK-1 IS EMPTY "<<endl;
            return -1;
        }
    }
    int peak2(){
        if(top2<size){
            return arr[top2];
        }
        else{
           cout<<"STACK-2 IS NOT EMPTY "<<endl;
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
        if(top2<size){
            if(top2==size){
                return true;
            }
            else{
                return false;
            }
        } 
    }
};

int main()
{
    cout<<endl<<endl;
    Stack s(5);
    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.push1(50);
    cout<<"TOP-1 ELEMENT : "<<s.peak1()<<endl;
    cout<<"TOP-2 ELEMENT : "<<s.peak2()<<endl;

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
    cout<<endl<<endl;

    return 0;
}
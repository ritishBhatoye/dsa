#include<iostream>
using namespace std;
class TwoStack{
    public:
    int *arr;
    int top1,top2;
    int size;

    TwoStack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }

    void push1(int num){
        if(top2-top1>1){
         top1++;
         arr[top1]=num;
        }
        else{
           cout<<"STACK OVERFLOW "<<endl;
        }
    }
    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
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
            cout<<"STACK UNDERFLOW "<<endl;
        }
    }
    void pop2(){
        if(top2<size){
            top2++;
        }
        else{
            cout<<"STACK UNDERFLOW "<<endl;
        }
    }
};

int main(){
TwoStack s(6);
s.push1(10);
s.push1(30);
s.push1(20);
s.push2(5);
s.push2(2);
    return 0;
}
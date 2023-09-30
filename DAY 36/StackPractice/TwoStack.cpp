#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top1, top2;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push1(int element)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "STACK OVERFLOW " << endl;
        }
    }
    void push2(int element)
    {
        if ((top2 - top1) > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "STACK OVERFLOW " << endl;
        }
    }
    void pop1()
    {
        if (top1>=0){
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
            cout<<"STAKC UNDEFLOW "<<endl;
        }
    }
    int peek1(){
        if(top1>=0){
return arr[top1];
        }
        else{
            cout<<"STACK IS EMPTY "<<endl;
            return -1;

        }
    }
    int peek2(){
        if(top2<size){
            return arr[top2];
        }
        
    }
};

int main()
{
Stack s(10);
s.push1(1);
s.push1(2);
s.push1(3);
s.push1(4);

s.push2(10);
s.push2(20);
s.push2(30);
s.push2(40);

cout<<"PEAK ELEMENT OF STACK 1 "<<s.peek1()<<endl;
cout<<"PEAK ELEMENT OF STACK 2 "<<s.peek2()<<endl;

    return 0;
}
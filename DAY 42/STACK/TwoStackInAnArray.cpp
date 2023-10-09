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
    //PUSH  OPERATION 
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
    //
};
int main(){
    return 0;
}

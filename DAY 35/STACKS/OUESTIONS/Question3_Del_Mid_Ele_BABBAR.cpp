//DELELTING MIDDLE ELEMENT FROM AN ARRAY 
#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;
    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int num){
        if(size-top>1){
            top++;
            arr[top]=num;
        }
        else{
            cout<<"STACK OVERFLOW "<<endl;
        }
    }
    void 
};
int main(){

    return 0;
}
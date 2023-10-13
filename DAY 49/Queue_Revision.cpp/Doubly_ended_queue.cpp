#include<iostream>
using namespace std;

class dQueue{
    public:
    int *arr;
    int size;
    int front;
    int back;

    dQueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    //pushFront
    void pushFront(int data)
    { 
        if(isFull){
            cout<<"QUEUE IS FULL "<<endl;
        }

    }
}

int main(){
    return 0;
}
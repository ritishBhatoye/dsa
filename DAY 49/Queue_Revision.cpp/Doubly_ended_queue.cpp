#include<iostream>
using namespace std;

class dQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    dQueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    //pushFront
    void pushFront(int data)
    { 
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"QUEUE IS FULL "<<endl;
        }
        else if(front==-1)
        {
            //for FIRST ELEMENT
            front=rear=0;
        }
        else if((front==0 && rear!=size-1)){
           front=size-1;
        }
        else{
            //normal case
            front--;
        }
        arr[front]=data;
    }

    //popREAR
    void popRear()
    {
       if(front==-1){
        cout<<"QUEUE IS EMPTY "<<endl;
       }
       //for ONE element
       else if(rear==front){
              rear=front=-1;
       }
       else if(rear==0){
        rear=size-1;
       }
       else{
        rear--;
       }
    }

    void popFront(){
        if(front==-1){
            cout<<"QUEUE IS EMPTY "<<endl;
        }
        else if(rear==front){
            //for ONE ELEMENT
            rear=front=-1;
        }
        else if(front==size-1){
           front=0;
        }
        else{
            front++;
        }
    }
    
    void pushRear(int data){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
          cout<<"QUEUE IS FULL "<<endl;
        }
        else if(front==-1){
            //for first element
              front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            //cycle MAINTAINING
             rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }
};

int main(){
    return 0;
}
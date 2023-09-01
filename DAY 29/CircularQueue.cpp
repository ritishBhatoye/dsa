#include<iostream>
using namespace std;

class CQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    CQueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
    }

    void enqueue(int element){
        if((front==0 && rear==size-1) ||
        (rear==(front-1)%(size-1))){
            cout<<"QUEUE IS FULL"<<endl;
        }
        else if(front==-1)
        {
            //first element to push
            front=rear=0;
            arr[rear]=element;
        }
        else if(rear==size-1 && front!=0){
            //WHEN rear is AT LAST
            rear=0;
            arr[rear]=element;     
        }
        else{
            rear++;
            arr[rear]=element;
        }
    }
    void dequeue(){
        if(front==-1){
            //when queue is empty
            cout<<"QUEUE IS EMPTY "<<endl;
        }
        // arr[front]=-1;
        else if(front==rear){
            //when single element is present 
       front=rear=-1;  
        }
        else  if(front==size-1){
            //when FRONT is present at LAST
            front=0;
        }
        else{
            //normal case
            front++;
        }
    }
};

int main(){
    CQueue c(4);
    c.enqueue(20);
    c.enqueue(40);
    c.dequeue();
    c.dequeue();
    c.dequeue();    
    return 0;
}


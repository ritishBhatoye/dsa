#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    //enqueue
    void enqueue(int e){
        //first element 
        if((front==0 && rear==size-1)||
           (rear==(front-1)%(size-1))){
            cout<<"QUEUE IS FULL "<<endl;
           }
        else if(front==-1){
            front=0;
            rear=0;
            arr[rear]=e;
        }
        else if(front!=0 && rear==size-1){
            rear=0;
            arr[rear]=e;
        }
        else{
            rear++;
            arr[rear]=e;
        }
    }

    void dequeue(){
        if(front==-1){
            cout<<"QUEUE IS EMPTY "<<endl;
           }
           //single ELEMENT
        else if(rear==front){
            rear=front=-1;
        }
        else if(front==size-1){
              front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
};

int main()
{
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    return 0;
}
#include<iostream>
using namespace std;

class Queue{
public:
int size;
int *arr;
int front;
int rear;
Queue(int size){
    this->size=size;
    front=-1;
    rear=-1;
    arr=new int[size];
}
void enqueue(int data){
    if((front==0 && rear==size-1)||
       (rear==(front-1)%(size-1))){
       cout<<"QUEUE IS FULL"<<endl;
       } 
    else if(front==-1){
        front=0;
        rear=0;
        arr[rear]=data;
    }
    else if(front!=0 && rear==size-1){
        rear=0;
        arr[rear]=data;
    }
    else{
        rear++;
        arr[rear]=data;
    }
}
void dequeue(){
    if(front==-1)
    {
        cout<<"QUEUE IS EMPTY "<<endl;
    }
    if(rear==front){
        rear=-1;
        front=-1;
    }
    else if(rear==front){
        arr[front]=-1;
        front++;
    }
    else if(front==size-1){
        arr[front]=-1;
         front=0;
    }
    else{
        arr[front]=-1;
        front++;
     
    }

}

};

int main(){
    Queue q(4);
    cout<<"FRONT : "<<q.front<<endl;
    cout<<"REAR  : "<<q.rear<<endl;
    q.enqueue(10);
    cout<<"FRONT : "<<q.front<<endl;
    cout<<"REAR  : "<<q.rear<<endl;
    q.enqueue(20);
    cout<<"FRONT : "<<q.front<<endl;
    cout<<"REAR  : "<<q.rear<<endl;
    q.enqueue(30);
    cout<<"FRONT : "<<q.front<<endl;
    cout<<"REAR  : "<<q.rear<<endl;
    q.enqueue(40);
    cout<<"FRONT : "<<q.front<<endl;
    cout<<"REAR  : "<<q.rear<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    //contructor
    Queue(int size){
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    //push or ADDING ELEMENT
    void enqueue(int e){
        if(rear==size)
        {
            cout<<"QUEUE IS EMPTY "<<endl;
        }
        else
        {
            rear++;
            arr[rear]=e;
        }
    }
    //enqueue
    void dequeue(){
        if(front==rear)
        {
           cout<<"QUEUE IS EMPTY "<<endl;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    int f(){
        if(front==rear){
            cout<<"QUEUE IS EMPTY "<<endl;
            return -1;
        }
        else{
            return arr[front]; 
        }
    }
    int r(){
        if(front==rear){
            cout<<"QUEUE IS EMPTY "<<endl;
            return -1;
        }
        else{
            return arr[rear]; 
        }
    }
};


int main(){
    cout<<endl<<endl;
    
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    
    cout<<q.r()<<endl;
    q.dequeue();
    cout<<q.f()<<endl;
    q.dequeue();
    cout<<q.f()<<endl;
    q.dequeue();
    cout<<q.f()<<endl;
    q.dequeue();
    cout<<q.f()<<endl;

    cout<<endl<<endl;

    return 0;
}
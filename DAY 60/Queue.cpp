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
        front=0;
        rear=0;
        arr=new int[size];
    }

    void enqueue(int data){
        if(rear==size){
           cout<<"QUEUE IS FULL "<<endl;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void dequeue(){
        if(front==rear){
            cout<<"QUEUE IS EMPTY "<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(rear==front){
                rear=0;
                front=0;
            }
        }
    }
    bool isEmpty(){
        if(rear==front){
            return true;
        }
        else{
            return false;
        }
    }
    int r(){
        if(rear==front){
             cout<<"QUEUE IS EMPTY "<<endl;
             return -1;
        }
        else{
            return arr[rear];
        }
    }
    int f(){
        if(rear==front)
        {
            cout<<"QUEUE IS EMPTY "<<endl;
        }
        else{
            return arr[front];
        }
    }
};


int main(){
    Queue q(6);
    q.enqueue(10);
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    q.enqueue(20);
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    q.enqueue(30);
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    q.enqueue(40);
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    
    q.enqueue(50);

    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    q.enqueue(60);
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    q.dequeue();
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    q.dequeue();
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;
    q.dequeue();
    cout<<"FRONT : "<<q.f()<<endl;
    cout<<"REAR  : "<<q.r()<<endl;


    return 0;
}
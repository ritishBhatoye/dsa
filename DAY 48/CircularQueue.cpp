#include<iostream>
using namespace std;

class cQueue
{  

   public:
   int *arr;
   int size;
   int front;
   int rear;
   cQueue(int size)
   {
    this->size=size;
    arr=new int[size];
    rear=-1;
    front=-1;
   }
   void enqueue(int data)
   {
    if((front==0 && rear==size-1) || rear==(front-1)%(size-1)){
        cout<<"QUEUE IS FULL "<<endl;
    }
    else if(front==-1){
        front=rear=0;
        arr[front]=data;
    }
    else if((rear==size-1) && front!=0){
        rear=0;
        arr[rear]=data;
    }
   }
    
    void dequeue(){
        if(front==-1)
        {
            cout<<"QUEUE IS EMPTY "<<endl;
        }
        else
        {   arr[front]=-1;
            front++;
        }
    }

    int qFront(){
        if(front==-1)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int qRear()
    
    {
        if(rear==front)
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};

int main()
{
    cQueue c(5);
    cout<<endl<<endl;
    c.enqueue(10);
    c.enqueue(20);
    c.enqueue(30);
    c.enqueue(40);
    c.enqueue(50);
    cout<<endl<<endl;
    cout<<"FRONT : "<<c.qFront()<<endl;
    cout<<"REAR  : "<<c.qRear()<<endl;
    cout<<"SIZE  : "<<c.size<<endl;
    cout<<endl<<endl;

    return 0;
}
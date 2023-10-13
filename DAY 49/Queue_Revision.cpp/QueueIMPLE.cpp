#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
    this->size=size;
    front=0;
    rear=0;
    arr=new int[size];
    }

    //ENQUEUE :- insertion/push

    void enqueue(int data)
    {
      if(rear==size){
        cout<<"QUEUE IS FULL "<<endl;
      }
      else{
        arr[rear]=data;
        rear++;
      }
    }
    
    //DEQUEUE :- deletion/pop

    void dequeue(){
        if(front==rear)
        {
          cout<<"QUEUE IS EMPTY "<<endl;
        }
        else
        {
             arr[front]=-1;
             front++;
             if(rear==front){
                rear=0;
                front=0;
             }
        }
    }
   
   bool isEmpty(){
    if(front==rear)
    {
        return true;
    }
    else{
        return false;
    }
   }
   int qFront(){
    if(front==rear){

          cout<<"QUEUE IS EMPTY "<<endl;
        return -1;
    }
    else{
              return arr[front];
    }
   }
   
   int qRear(){
    if(rear!=0)
    {
       return arr[rear-1];
    }
    else{
        return -1;
    }
   }

};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<endl<<endl;
    cout<<"FRONT : "<<q.qFront()<<endl;
    cout<<"REAR  : "<<q.qRear()<<endl;
    cout<<endl;
    if(q.isEmpty()){
        cout<<"QUEUE IS EMPTY "<<endl;
    }
    else{
        cout<<"QUEUE IS NOT EMPTY "<<endl;
        
    }
    cout<<endl;
    q.dequeue();
    q.dequeue();
    cout<<"FRONT : "<<q.qFront()<<endl;
    cout<<"REAR  : "<<q.qRear()<<endl;
    cout<<endl<<endl;
    return 0;
}
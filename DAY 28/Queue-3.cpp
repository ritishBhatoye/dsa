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
    }
    
    void enqueue(int element){
  if(rear==size){
   cout<<"QUEUE IS FULL "<<endl;
  }
  else{
    arr[rear]=element;
    rear++;
  }
    }
    void dequeue(){
        if(rear==front)
{
    cout<<"QUEUE IS EMPTY " <<endl;
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
int qfront(){
    if(front==-1){
return -1;
    }    
else{
    return arr[front];
}
    }
    void print(){
        cout<<endl;
        while(front<rear){
            cout<<arr[front]<<" ";
            front++;
        }
    }
};
int main(){
    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.qfront();
    
    q.print();
    return 0;
}
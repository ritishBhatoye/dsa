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

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int element){
        if(rear==size){
            cout<<"QUEUE IS ALREDY FULL "<<endl;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }
    void dequeue(){
        if(front==rear){
            cout<<"QUEUE IS EMPTY "<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    void print(){
        while(front<rear){
            cout<<arr[front]<<" ";
            front++;
        }
    }
    int qfront(){
      if(front==rear){
       return -1;
      }
      else{
       return arr[front];
      }
    }
    int qrear(){
        if(rear==front){
           return -1;
        }
        else{
            return arr[rear-1];
        }
    }
};
int main(){

    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    if(q.isEmpty()){
        cout<<"QUEUE IS EMPTY "<<endl;
    }
    else{
        cout<<"QUEUE IS NOT EMPTY "<<endl;
    }
    cout<<"FRONT  "<<q.qfront()<<endl;
    cout<<"REAR   "<<q.qrear()<<endl;
    q.print();
    return 0;
}
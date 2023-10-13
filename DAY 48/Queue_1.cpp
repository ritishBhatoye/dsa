#include<iostream>
using namespace std;

class Queue{

    public:
    int *arr;
    int size;
    int front;
    int rear;
    //initialization
    Queue(int size){
        this->size=size;
        arr=new int[size];
        rear=0;
        front=0;
    }

    //ENQUEUE :- INSERTION
    void enqueue(int element){
        if(rear==size){
            cout<<"QUEUE IS FULL "<<endl;
        }
        else{
             arr[rear]=element;
             rear++;
        
        }
    }

    //DEQUEUE :- DELETION
    void dequeue(){
        ///IF EMPTY
        if(front==rear)
        {
           cout<<"QUEUE IS EMPTY "<<endl;
        }
        else
        {
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    
    int qfront(){
        if(front==rear){
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    
    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    int qRear(){
        if(rear==front){
            return -1;
        }
        else{
            return arr[rear-1];
        }
    }
};
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<endl<<endl;
    cout<<"SIZE  : "<<q.size<<endl;
    cout<<"FORNT : "<<q.qfront()<<endl;
    cout<<"REAR  : "<<q.qRear()<<endl;
    cout<<endl<<endl;

    if(q.isEmpty()){
        cout<<"QUEUE IS EMPTY "<<endl;
    }
    else{
        cout<<"QUEUE IS NOT EMPTY "<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
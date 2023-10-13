#include<iostream>
using namespace std;

class cQueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    //intialization
    cQueue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }
    //ENQUEUE :- INSERTION/PUSH
    void enqueue(int data){
        //FULL QUEUE
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<" QUEUE IS FULL "<<endl;
        }

        else if(front==-1){
            //INSERTING FIRST ELEMENT
            front=rear=0;
           
        }
        else if(front!=0 && rear==size-1){
            rear=0;
        }
        else
        {
             rear++;
        }
         arr[rear]=data;
    }

    //dequeue OPERATION
    void dequeue()
    {
       if(front==-1){
        cout<<"QUEUE IS EMPTY "<<endl;
       }

       else if(front==rear){
        //only ONE ELEMENT IS PRESENT
        front=0;
       }
       else if(front==size-1){
        front=0;
       }
       else{
        front++;
       }
    }

    //front element
    int qFront(){
        if(front!=-1){
         return arr[front];
        }
        else{
            cout<<"QUEUE IS EMPTY "<<endl;
        }
    }
    
    //BACK or REAR ELEMENT
   
    int qRear(){
        if(rear!=-1){
            return arr[rear];
        }
        else{
            cout<<"QUEUE IS EMPTY "<<endl;
            return -1;
        }
    }
  
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(){
    cQueue c(5);
    c.enqueue(10); 
    c.enqueue(20); 
    c.enqueue(30); 
    c.enqueue(40); 
    c.enqueue(50); 
    cout<<endl<<endl;
    cout<<"FRONT : "<<c.qFront()<<endl;
    cout<<"REAR  : "<<c.qRear()<<endl;
    cout<<endl<<endl;
    if(c.isEmpty()){
        cout<<"CIRCULAR QUEUE IS EMPTY "<<endl;
    }
    else{
        cout<<"CIRCULAR QUEUE IS NOT EMPTY "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}
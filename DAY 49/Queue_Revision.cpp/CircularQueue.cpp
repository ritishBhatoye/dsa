#include <iostream>
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
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    // ENQUEUE :- insertion
    void enqueue(int data)
    {
        // CHECK IS FULL
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "QUEUE IS FULL " << endl;
        }
        else if (front ==-1)
        {
            // for first ELEMENT
            rear = front = 0;
        }
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    // DEQUEUE :- DELETION/POP
    void dequeue()
    {
        // check if empty
        if (front == -1)
        {
            cout << "QUEUE IS EMPTY " << endl;
        }
        else if (front == rear)
        {
            // if FIRST ELEMENT
            front = 0;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    int qFront()
    {
        if (front != -1)
        {
            return arr[front];
        }
        else
        {
            cout << "QUEUE IS EMPTY " << endl;
        }
    }
    int qRear()
    {
        if (rear != -1)
        {
            return arr[rear];
        }
        else
        {
            cout << "QUEUE IS EMPTY " << endl;
        }
    }

    bool isEmpty(){
        if(front==-1){
return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
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
        cout<<"QUEUE IS EMPTY "<<endl;
    }
    else{
        cout<<"QUEUE IS NOT EMPTY "<<endl;
    }
    cout<<endl<<endl;
    return 0;
}
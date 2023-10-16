#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //creation  of NODE
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

    ~Node()
    {
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};


int main()
{
    return 0;
}
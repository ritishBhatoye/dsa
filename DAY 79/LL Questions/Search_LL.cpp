#include<iostream>
using namespace std;

class Node{
    public:
    int data;

    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail,int data)
{

  Node* temp=new Node(data);

  tail->next=temp;
  tail=temp;
}

void print()
int main()
{
    cout<<
    return 0;
}
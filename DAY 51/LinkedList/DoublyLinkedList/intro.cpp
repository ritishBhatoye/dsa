#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node* prev;

  public:
  Node(int data){
    this->data=data;
    this->next=NULL; 
    this->prev=NULL;
  }
};

//insertion AT HEAD

void insertionAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    
    
    temp->next=head;
    head=temp;
  

}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int length=0;
    Node* temp=head;
    while(temp!=NULL)
    {
     length++;
     temp=temp->next;
    }
    return length;
}
int main(){
    Node* n=new Node(10);
    Node* head=n;
    print(head);
    insertionAtHead(head,20);
    print(head);
    cout<<"LENGTH OF LINKED LIST : "<<getLength(head)<<endl;

    return 0;
}
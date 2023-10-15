#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //creation NODE
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
//INSERTION AT HEAD or START
void insertAtHead(Node* &head,int data)
{
  //creating temp NODE
  Node* temp=new Node(data);
  //TEMP KA JO NEXT NULL POINT KR RAHA HOGA USKO HEAD PR POINT KRVANGE
  temp->next=head;
  //HEAD JO CURRENT ELEMENT KO POINT KR RAHA HOGA USKO TEMP PR POINT KRVANGE 
  head=temp; 
}

//PRINTING OR TRAVERSING LINKED LIST

void print(Node* &head){
    //WE CREATE TEMP VARIABLE SO HEAD VALUE CAN NOT BE ALTERED
    Node* temp=head;
    //UNTIL TEMP REACHED NULL VALUE
    while(temp!=NULL)
    {       
            cout<<temp->data<<" ";
            //UPDATE THE TEMP WITH NEXT OF TEMP WHICH CONTAINS THE ADDRESS OF NEXT NODE
            temp=temp->next;
    }
    cout<<endl<<endl;
}

int main()
{
    Node* n=new Node(10);
    cout<<endl<<endl;
    Node* head=n;
    cout<<n->data<<endl;
    cout<<n->next<<endl;
    cout<<endl;
    print(head);
    
    insertAtHead(head,20);
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtHead(head,40);
    print(head);
    insertAtHead(head,50);
    print(head);
    
    cout<<endl;
    return 0;
}
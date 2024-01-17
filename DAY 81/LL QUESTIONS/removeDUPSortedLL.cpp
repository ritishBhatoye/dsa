#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
    int val=this->data;
    if(this->next==NULL)
     {
        delete next;
        next=NULL;
     }
    }
};

void insertAtTail(Node* &tail,int data)
{

   Node* temp=new Node(data);
   tail->next=temp;
   tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;

}

Node* removeDupSORT(Node* &head)
{
    if(head==NULL){
        return NULL;
    }
    
    Node* curr=head;

    while(curr!=NULL)
    {
      if((curr->next!=NULL) && (curr->data==curr->next->data))
      {
        Node* next1=curr->next->next;
        Node* nodeToDel=curr->next;
        delete(nodeToDel);
        curr->next=next1;
      }
      else
      {
        curr=curr->next;
      }
    }
return head;
}


int main()
{

    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;
    cout<<endl<<endl;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,30);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    cout<<endl<<endl;
    print(head); 
    Node* ans=removeDupSORT(head);
    print(ans);
    cout<<endl<<endl;

    return 0;

}
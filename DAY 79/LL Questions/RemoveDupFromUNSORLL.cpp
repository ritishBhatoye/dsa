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
    ~Node(){
        int val=this->data;
        if(this->next==NULL){
            delete next;
            this->next=NULL;
        }
    }
};

void InsertAtTail(Node* &tail,int data)
{
   
   Node* temp=new Node(data);
   tail->next=temp;
   tail=temp;
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

Node* removeDupFromUnsort(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* curr=head;
    while(curr->next!=NULL && curr!=NULL)
    {
        Node* temp=curr->next;
        while(temp!=NULL)
        {
            if(temp->data==curr->data){
                Node* next1=temp->next;
                Node* nodeToDel=temp;
                delete(nodeToDel);
                curr->next=next1;
            }
            else
            {
                temp=temp->next;
            }

        }
        curr=curr->next;
    }
    return head;
}

int main()
{
    Node* n=new Node(20);
    Node* head=n;
    Node* tail=n;

    cout<<endl<<endl;
    InsertAtTail(tail,10);
    InsertAtTail(tail,2);
    InsertAtTail(tail,20);
   cout<<endl;
   print(head);
   Node* ans=removeDupFromUnsort(head);
   print(ans);
    cout<<endl<<endl;

    return 0;
}
#include<iostream>
#include<map>
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
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

void insertAtTail(Node* &tail,int data){
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

bool DetectLoop(Node* &head)
{
    if(head==NULL){
        return false;
    }

    map<Node*,bool> vis;

    Node* temp=head;

    while(temp!=NULL)
    {
      if(vis[temp]==true){
        cout<<"LOOP IS DETECTED AT "<<temp->data<<" ";
        return true;
      }
      vis[temp]=true;
      temp=temp->next;
    }
return false;
}

int main()
{
    cout<<endl<<endl;
    Node* n=new Node(12);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,15);
    insertAtTail(tail,10);
    insertAtTail(tail,11);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,2);
    insertAtTail(tail,3);

    cout<<endl;
    print(head);
    
    if(DetectLoop(head))
    {
        cout<<"LL IS CONTAINING LOOP "<<endl;
    }
    else
    {
        cout<<"LL IS NOT CONTAINING LOOP "<<endl;

    }
     
    cout<<endl<<endl;
    
    return 0;
}
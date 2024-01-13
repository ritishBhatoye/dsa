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

void delNode(Node* &head,int pos){
    Node* curr=head;
    Node* prev=NULL;

    int cnt=1;
    while(cnt<pos)
    {
        cnt++;
        prev=curr;
        curr=curr->next;
    }
    
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}
int main()
{
    cout<<endl<<endl;
    Node* n=new Node(10);
    Node* head=n;
    Node* tail=n;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    cout<<endl;
    print(head);
    delNode(head,3);
    print(head);
    cout<<endl<<endl;

    return 0;
}
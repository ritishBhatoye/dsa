#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
//inserting at head
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
//inserting at tail
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;

}
//inserting at POSITION
void insertAtPosition(Node* &head,int pos,int data){
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //POSITION REACHEC
    //inserting at POSITION
    Node* nNode=new Node(data);
    nNode->next=temp->next;
    temp->next=nNode;
}
//traversing Linked List
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    cout<<endl<<endl;
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    print(head);

    cout<<endl;
    int d;
    cout<<"ENTER DATA TO INSERT IN NODE "<<endl;
    cin>>d;
    insertAtHead(head,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    print(head);

    cout<<endl;

    cout<<"ENTER DATA TO INSERT IN NODE "<<endl;
    cin>>d;
    insertAtHead(head,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    print(head);

    cout<<endl;

    cout<<"ENTER DATA TO INSERT IN NODE "<<endl;
    cin>>d;
    insertAtHead(head,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    print(head);

    cout<<endl;

    cout<<"ENTER DATA TO INSERT IN NODE "<<endl;
    cin>>d;
    insertAtHead(head,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    print(head);

    cout<<endl;

    cout<<"ENTER DATA TO INSERT IN NODE "<<endl;
    cin>>d;
    insertAtHead(head,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    cout<<endl<<endl;
    print(head);
    cin>>d;
    insertAtTail(tail,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    cout<<endl<<endl;
    print(head);
    cin>>d;
    insertAtTail(tail,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    cout<<endl<<endl;
    print(head);
    int pos;
    cout<<"ENTER THE POSITION : "<<endl;
    cin>>pos;
    cin>>d;

    insertAtPosition(head,pos,d);
    cout<<"DATA : "<<head->data<<endl;
    cout<<"NULL : "<<head->next<<endl;
    cout<<endl<<endl;
    print(head);
    
    cout<<endl<<endl;
    return 0;
}
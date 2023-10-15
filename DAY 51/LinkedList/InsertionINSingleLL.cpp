#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //NODE CREATION
    Node(int data){
        this->data=data;
        this->next=NULL;
    }



};
    //INSERTION AT START or HEAD
    void insertAtHead(Node* &head,int data)
    {
        //new node create
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
int main(){
    Node* n=new Node(10);
    cout<<endl<<endl;

    cout<<n->data<<endl;
    cout<<n->next<<endl;
    Node* head=n;
    insertAtHead(head,20);
    cout<<n->data<<endl;
    cout<<n->next<<endl;
    
    cout<<endl<<endl;
    return 0;
}
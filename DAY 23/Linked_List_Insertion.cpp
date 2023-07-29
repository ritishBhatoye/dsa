#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //CONSTRUCTOR
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
 void InsertAtHead(Node* &head,int d){
         //new node create
     Node* temp=new Node(d);
     temp->next=head;
     head=temp;
 }
 void print(node* &head){
    
 }
int main(){
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

        return 0;
}
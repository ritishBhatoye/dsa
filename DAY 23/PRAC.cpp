// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//      this->data=data;
//      this->next=NULL;
//     }
// };
// void insertionAtHead(Node* &head,int d){
// Node* temp=new Node(d);
// temp->next=head;
// head=temp;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node *n=new Node(10);
//     cout<<n->data<<endl;
//     cout<<n->next<<endl;
    
//     Node* h=n;
//     print(h);

//     insertionAtHead(h,12);
//     print(h);

//     insertionAtHead(h,15);
//     print(h);
//     return 0;
// }
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
};
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
   temp->next=head;
   head=temp;
}
void print(Node* &head){
    Node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;
}
int main(){
    Node* n=new Node(10);
    cout<<n->data<<endl;
    cout<<n->next<<endl;
    
    Node* head=n;
    print(head);

    insertAtHead(head,12);
    print(head);
    return 0;
}








#include<iostream>
using  namespace std;
class Node
{
    public:
    int data;
    Node* next;
    public:
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
//    ~Node()
//    {
//       if(this->next!=NULL)
//       {
//         delete next;
//         next=NULL;

//       }
//    }
}; 


  //insertion at head
    void insertAtHead(Node* &head,int data)
    {
         Node* temp=new Node(data);
         temp->next=head;
         head=temp;
    }

    //insertion at tail
    void insertAtTail(Node* &tail,int data)
    {
        Node* temp=new Node(data);
        tail->next=temp;
        tail=temp;
    }
    //printing linked list
    void print(Node* &head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl<<endl;
    }

void insertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    Node* temp=head;

    //at HEAD


    if(position==1)
    {      insertAtHead(head,data);
           return ;
    }
    else
    {  
       int cnt=1;
       while(cnt<position-1)
       {

        temp=temp->next;
        cnt++;
       }
       //Last Node
       if(temp==NULL)
       {
            insertAtTail(head,data);
            return ;
       }
       
       else
       {
         //inserting in between
         Node* n=new Node(data);
         n->next=temp->next;
         temp->next=n;

       }
    }
}
//start node
// void deleteNode(Node* &head)
// {
//    Node* temp=head;
//    head=temp->next;
//    temp->next=NULL;
// }
void deleteNode(Node* &head,Node* &tail,int position)
{
        if(position==1)
        {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;      
        }
        else
        {  
               Node* temp=head;
               int cnt=1;
               Node* curr=temp;
               Node* prev=NULL;
               while(cnt<position)
               {
                prev=curr;
                curr=curr->next;
                cnt++;
               }  
     
               prev->next=curr->next;
               curr->next=NULL;
               delete curr;
            }

}

//remove DUPLICATES
Node* removeDup(Node* head)
{ 

    if(head==NULL){
        return  NULL;
    }
    Node* curr=head;
    while(curr!=NULL)
    { 
        if((curr->next!=NULL) && (curr->data==curr->next->data))
        {
        Node* nextNode=curr->next->next;
        Node* nodeToDelete=curr->next;
        delete(nodeToDelete);
        curr->next=nextNode;
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
    cout<<endl;
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtTail(tail,20);
    print(head);    
    insertAtTail(tail,40);
    print(head);    
    insertAtTail(tail,50);
    print(head);
    // insertAtTail(tail,10);
    // print(head);
    // insertAtPosition(head,tail,7,-1);
    // print(head);
    Node* ans=removeDup(head);
    print(ans);

    return 0;
}
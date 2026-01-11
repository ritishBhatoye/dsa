#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data)
{
    Node* nodeToInsert=new Node(data);

    nodeToInsert->next=head;
    head=nodeToInsert;
}
void insertAtTail(Node* &tail,int data)
{

    Node* nodeInsert=new Node(data);

    tail->next=nodeInsert;
    tail=nodeInsert;
}

void insertAtK(Node* &head,int data,int k)
{
    Node* temp=head;
    Node* nodeInsert=new Node(data);
    int cnt=1;

    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }

    nodeInsert->next=temp->next;
    temp->next=nodeInsert;
}

// Delete
void deleteAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    temp->next=NULL;

    delete temp;
}

void deleteAtTail(Node* &head,Node* &tail)
{
    Node* temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }

    tail=temp;
    tail->next=NULL;
    temp=temp->next;

    delete temp;

}

void deleteAtK(Node* head,int k)
{
    Node* temp=head;

    int cnt=1;

    while(cnt<k-1)
    {
        temp=temp->next;
        cnt++;
    }
    
    Node* nodeToDelete=temp->next;

    temp->next=temp->next->next;
    nodeToDelete->next=NULL;

    delete nodeToDelete;

}   

void deleteElement(Node* &head,int val)
{
    if(head==NULL)
    {
        return ;
    }

    if(head->data==val)
    {
        Node* temp=head;
        head=head->next;
        
        delete temp;
        
        return ;
    }

    Node* curr=head->next;
    Node* prev=head;

    while(curr!=NULL && curr->data!=val)
    {
        prev=curr;
        curr=curr->next;
    }

    if(curr==NULL) return ;

    prev->next=curr->next;
    delete curr;

}
int cnt(Node* &head,int val)
{
    int count=0;

    Node* temp=head;

    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            count++;
        }
        temp=temp->next;
        
       
    }
return count;
}
bool searchNode(Node* head,int k)
{
    Node* temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data==k)
        {
            return true; 
            break;
        }
        temp=temp->next;
    }
    return false;
}
Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* temp;
    while(curr!=NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        
    }
    

    return prev;
}

void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main()
{
    cout<<endl<<endl;
    Node* n=new Node(1);
    Node* head=n;
    Node* tail=n;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    print(head);
    cout<<endl;
    Node* ans=reverse(head);
    print(ans);
    // insertAtTail(tail,7);
    // insertAtTail(tail,5);
    // insertAtTail(tail,6);
   
    // int count =cnt(head,7);
    // print(head);
    // cout<<"count :- "<<count<<endl;

   

    // while(count!=0)
    // {
    //     deleteElement(head,7);
    //     count--;
    // }
    // print(head);

    cout<<endl<<endl;
    cout<<endl<<endl;
    // cout<<"Enter data for the Node you want to insert :- ";
    // int data;
    // cin>>data;
    // cout<<"Enter the position :- ";
    // int k;
    // cin>>k;
    // insertAtK(head,data,k);
    // print(head);

    cout<<endl<<endl;

    // deleteAtHead(head);
    // cout<<"After deleting from the head :- ";
    // print(head);
     
    // cout<<endl<<endl;
    // deleteAtTail(head,tail);
    // cout<<"After deleting fromthe tail :- ";
    // print(head);
    // cout<<endl<<endl;
    // cout<<"Enter the position for that you want to delete :- ";
    // int pos;
    // cin>>pos;
    // deleteAtK(head,pos);
    // cout<<"Deleting Node after from the K position :- ";
    // print(head);
    // cout<<endl<<endl;
    // int ele;
    // cout<<"Enter the element you want to search in the LL :- ";
    // cin>>ele;
    // if(searchNode(head,ele))
    // {
    //     cout<<"Node "<<ele<<" is present in the LL"<<endl;
    // }
    // else
    // {
    //     cout<<"Node "<<ele<<" is NOT present in the LL "<<endl;
    // }
    cout<<endl<<endl;

    return 0;
}
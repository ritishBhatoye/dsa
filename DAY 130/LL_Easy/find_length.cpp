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

//length
int length(Node* &head)
{
    Node* temp=head;

    int cnt=0;

    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }

    return cnt;
}


//TRAVERSAL
void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//search
bool searchElement(Node* &head,int k)
{
      Node* itr=head;

      while(itr->next!=NULL)
      {
        if(itr->data==k)
        {
            return true;
            break;
        }
        else
        {
         itr=itr->next;   
        }

      }
      return false;

}



void insertAtTail(Node*& head,Node* &tail,int k,int data)
{
    int n=length(head);
    if(k==0)
    {
        cout<<"PLEASE USE HEAD INSERTION "<<endl;
        return;
    }

    else if(k!=0 && k<=n)
    {
        Node* temp=new Node(data);
        
        Node* itr=head;
        int i=0;
        while(i<=n-1)
        {
            if(i==k)
            {
                Node* tempPtr=itr->next;
                itr->next=temp;
                temp->next=tempPtr;
                break;
            }
            else
            {
                i++;
                itr=itr->next;
            }
        }
    }

   else
   {
     Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
}
void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);

    temp->next=head;

    temp=temp->next;
}


int main()
{
    cout<<endl<<endl;
    Node* node=new Node(10);
    Node* tail=node;
    Node* head=node;
    insertAtTail(head,tail,2,20);
    insertAtTail(head,tail,3,30);
    insertAtTail(head,tail,4,40);
    insertAtTail(head,tail,5,50);
    insertAtTail(head,tail,6,60);

    insertAtTail(head,tail,2,54);

    print(head);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int n=length(head);

    cout<<endl<<endl;
    cout<<"N :- "<<n<<endl;
    int k;
    cout<<endl<<endl;
    cout<<endl<<endl;

    cout<<"Enter the Element to search :- ";
    cin>>k;
    if(searchElement(head,k))
    {
        cout<<"Element "<<k<<" is available in the LL  "<<endl;
    }
    else
    {
        cout<<"Element  "<<k<<" is NOT available in the LL  "<<endl;

    }

    cout<<endl<<endl;

    cout<<endl<<endl;




}
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


Node* reverseLL(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* forw;

    while(forw!=NULL)
    {
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}

Node* reverseIter(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node* newHead=reverseIter(head->next);

    Node* front=head->next;

    front->next=head;
    
    head->next=NULL;

    return newHead;

}

Node* deleteNode(Node* &head,int k)
{
    Node* temp=head;

    while(temp->data!=k)
    {
        if(temp->next==NULL)
        {
            cout<<"Node "<<k<<" not found "<<endl;
            return head;
        }
        temp=temp->next;
    }
    
    temp->data=temp->next->data;
    temp->next=temp->next->next;
   

    return head;

}

Node* swapNodes(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL && curr->next!=NULL )
    {

        Node* nextNode=curr->next->next;

        if(prev==NULL)
        {
            
            // prev=curr->next;

            Node* temp=curr->next;
            // curr=curr->next;
            temp->next=curr;
            head=temp;



        }
        else
        {
            cout<<"AFTER SETTING  PREV :-"<<endl;
            cout<<endl;
            cout<<"PREV :- "<<prev->data<<endl;
            cout<<endl;

            cout<<"CURR :- "<<curr->data<<endl;
            cout<<endl;

            Node* temp=curr->next;

            curr->next=prev;

            prev->next=temp;

        }

        prev=curr->next;
        curr=nextNode;
    }

    return head;
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

    // Node* rev=reverseLL(head);

    // cout<<endl<<endl;
    // print(rev);
    cout<<endl<<endl;

    cout<<endl<<endl;
    // Node* ans=reverseIter(head);
    // print(ans);



    // Node* afterDelHead=deleteNode(head,20);
    
    // print(afterDelHead);
    Node* ansSwapNodes=swapNodes(head);

    print(ansSwapNodes);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;


}
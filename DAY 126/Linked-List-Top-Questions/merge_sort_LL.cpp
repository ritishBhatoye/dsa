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

void inputAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);

    temp->next=head;
    head=temp;
}
void inputAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);

    tail->next=temp;
    tail=temp;
}



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



void print(Node* &head)
{

    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}

Node* merge_sort_LL(Node* &l1,Node* &l2)
{

    if(l1==NULL)
    {
        return l2;
    }

    if(l2==NULL)
    {
        return l1;
    }

    Node* t1=l1;
    Node* t2=l2;

    Node* ans;
    Node* ansTail;
     if(t1->data < t2->data)
    {
        ans=t1;
        ansTail=t1;
        t1=t1->next;
    }
   

    else
    {
        ans=t2;
        ansTail=t2;
        t2=t2->next;
    }
    
    ans->next=NULL;
    ansTail->next=NULL;


    while(t1!=NULL && t2!=NULL)
    {
        if(t1->data==t2->data)
        {
            Node* temp=new Node(t1->data);
            temp->next=NULL;
            ansTail->next=temp;
            ansTail=temp;
            
            
            Node* temp2=new Node(t2->data);
            temp2->next=NULL;
            ansTail->next=temp2;
            ansTail=temp2;

            t1=t1->next;
            t2=t2->next;
        }
        else if(t1->data < t2->data)
        {
            Node* temp=new Node(t1->data);
            temp->next=NULL;
            ansTail->next=temp;
            ansTail=temp;
            t1=t1->next;
        }
        
        else if(t1->data > t2->data)
        {
            Node* temp=new Node(t2->data);
            temp->next=NULL;
            ansTail->next=temp;
            ansTail=temp;
            t2=t2->next;
        }

    }

    while(t1!=NULL)
        {
            Node* temp=t1;
            temp->next=NULL;
            ansTail->next=temp;
            ansTail=temp;
            t1=t1->next;

        }
    while(t2!=NULL)
        {
            Node* temp=t2;
            temp->next=NULL;
            ansTail->next=temp;
            ansTail=temp;
            t2=t2->next;
        }

        return ans;
}



int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    Node* n1=new Node(1);
    Node* n2=new Node(1);

    Node* l1=n1;
    Node* lt1=n1;

    Node* l2=n2;
    Node* lt2=n2;

    cout<<endl<<endl;
    inputAtTail(lt1,2);
    inputAtTail(lt1,4);

    inputAtTail(lt2,3);
    inputAtTail(lt2,4);

    print(l1);
    cout<<endl<<endl;
    cout<<endl<<endl;

    print(l2);

    cout<<endl<<endl;
    Node* merge=merge_sort_LL(l1,l2);
    cout<<endl<<endl;
    cout<<"Merging them together :- "<<endl;
    print(merge);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

return 0;
}

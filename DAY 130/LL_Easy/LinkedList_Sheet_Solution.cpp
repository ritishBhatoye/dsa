#include<iostream>
#include<unordered_map>
#include<vector>
#include <queue>
#include <functional>
#include <utility>

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

    head=head->next;

    while(curr!=NULL && curr->next!=NULL)
    {
        Node* nextNode=curr->next;
        Node* nextPair=curr->next->next;

        nextNode->next=curr;
        curr->next=nextPair;

        if(prev!=NULL)
        {
            prev->next=nextNode;
        }

        prev=curr;
        curr=curr->next;
    }

    return head;
}


Node* removeNthNodeFromEnd(Node* &head,int k)
{
    Node* temp=head;

    int n=length(temp);

    if(k>n)
    {
        return head;
    }

    else if(k==n)
    {
        Node* delNode=head;
        head=head->next;
        delete delNode;
        return head;
    }

    else if(k==1)
    {
        Node* temp=head;

        while(temp->next->next!=NULL)
        {
            temp=temp->next;

        }

        Node* delNode=temp->next;
        temp->next=NULL;
        delete delNode;

        return head;
    }
    else
    {
    int i=1;
    while(i< n-k+1)
    {
        temp=temp->next;
        i++;
    }

    temp->data=temp->next->data;
    temp->next=temp->next->next;


    return head;
    
    }
    return NULL;

}


Node* mergeTwoSorted(Node* &l1,Node* &l2)
{
    Node* dummy=new Node(-1);

    Node* ansHead=dummy;
    Node* ansTail=dummy;


    Node* head1=l1;
    Node* head2=l2;

    while(head1 && head2)
    {
        if(head1->data==head2->data)
        {
            Node* temp=new Node(head1->data);
            head1=head1->next;
            ansTail->next=temp;
            ansTail=ansTail->next;
        }

        else if(head1->data < head2->data)
        {
            Node* temp=new Node(head1->data);
            head1=head1->next;

            ansTail->next=temp;
            ansTail=ansTail->next;
        }
        else
        {
            Node* temp=new Node(head2->data);
            head2=head2->next;
            ansTail->next=temp;
            ansTail=ansTail->next;

        }

    }

    while(head1!=NULL)
    {
        Node* temp=new Node(head1->data);
        head1=head1->next;

        ansTail->next=temp;
        ansTail=ansTail->next;
    }
    while(head2!=NULL)
    {
        Node* temp=new Node(head2->data);
        head2=head2->next;
        ansTail->next=temp;
        ansTail=ansTail->next;
    }
    return ansHead->next;
}

Node* detectLoopInLL(Node* &head)
{
    int cnt=0;

    Node* temp=head;

    unordered_map<Node*,int> m;

    while(temp!=NULL)
    {
        if(m.find(temp)!=m.end())
        {
            return temp;
            break;
        }
        m[temp]=cnt;
        cnt++;
        temp=temp->next;
    }

    return NULL;
}
Node* removeLoopInLL(Node* &head)
{
    int cnt=0;
    Node* prev = head;
    Node* temp=head;

    unordered_map<Node*,int> m;

    while(temp!=NULL)
    {
        if(m.find(temp)!=m.end())
        {
            prev->next=NULL;
            return head;
            break;
        }
        m[temp]=cnt;
        cnt++;
        prev=temp;
        temp=temp->next;
    }

    return head;
}


Node* midNode(Node* &head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;

        fast=fast->next->next;

        // if(fast->next!=NULL)
        // {
        //     fast=fast->next;
        // }
    }
    return slow;

}


bool isPalidrome(Node*& head)
{

    Node* mid=midNode(head);
    Node* newHead=reverseLL(mid->next);



    Node* first=head;

    Node* second=newHead;

    while(second!=NULL)
    {
        if(first->data!=second->data)
        {
            return false;
            break;
        }

        first=first->next;
        second=second->next;

    }

    return true;


}
// 16. Intersection Point of Two Linked Lists 
//

// 17. Merge K Sorted Linked Lists 

Node* mergeKLists(vector<Node*>& list) 
{
    priority_queue<
    pair<int, Node*>,              // 👈 element type
    vector<pair<int, Node*>>,      // 👈 underlying container
    greater<pair<int, Node*>>      // 👈 comparator
> pq;
    for(int i=0;i<list.size();i++)
    {
        if(list[i])
        {
            pq.push({list[i]->data,list[i]});
        }
        
    }

   Node* dummy=new Node(-1);
   Node* temp=dummy;

   while(!pq.empty())
   {
        auto it=pq.top();
        pq.pop();

        if(it.second->next)
        {
            pq.push({it.second->next->data,it.second->next});
        }

        temp->next=it.second;
        temp=temp->next;
   }
return dummy->next;
    
}

//19. Rotate a Linked List  *(25–35 min)*   
Node* rotateLL(Node* &head,int k)
{
    int n=length(head);

    if(n<k)
    {
        k=k%n;
    }

    Node* temp=head;
    Node* newHead=NULL;
    int i=n-k;
    while(i!=1)
    {
        temp=temp->next;
        i--;
    }

    newHead=temp->next;
    Node* newTemp=temp->next;
    temp->next=NULL;
    while(newTemp->next!=NULL)
    {
        newTemp=newTemp->next;
    }

    newTemp->next=head;

    return newHead;
}
// 20. Delete Node Without Head Pointer  *(20–30 min)*  

void deleteNodeWithOutHead(Node* &node)
{
    node->data=node->next->data;
    node->next=node->next->next;

}
// 21. Remove Duplicates from Linked List (Sorted / Unsorted)  *(25–35 min)*  

Node* removeDupSorted(Node* &head)
{
    Node* temp=head;

    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            temp->data=temp->next->data;
            temp->next=temp->next->next;
        }
    }

    return head;
}



int main()
{
    cout<<endl<<endl;
    Node* node=new Node(1);
    Node* tail=node;
    Node* head=node;
    insertAtTail(head,tail,2,2);
    insertAtTail(head,tail,3,3);
    insertAtTail(head,tail,4,4);
    insertAtTail(head,tail,5,5);
    insertAtTail(head,tail,6,6);

    // insertAtTail(head,tail,3,3);
    // insertAtTail(head,tail,4,4);
    // insertAtTail(head,tail,5,5);
    // insertAtTail(head,tail,6,6);
    // insertAtTail(head,tail,7,7);
    // insertAtTail(head,tail,8,8);


    // Node* node1=new Node(2);
    // Node* tail1=node1;
    // Node* head1=node1;

    // Node* node2=new Node(1);
    // Node* tail2=node2;
    // Node* head2=node2;
    // insertAtTail(head2,tail2,2,3);
    // insertAtTail(head2,tail2,3,4);
    // insertAtTail(head2,tail2,4,5);
    // insertAtTail(head2,tail2,5,6);



    cout<<endl<<endl;
    // print(head1);
    // cout<<endl<<endl;

    // print(head2);

    cout<<endl<<endl;
    // int n=length(head);

    cout<<endl<<endl;
    // cout<<"N :- "<<n<<endl;
    // int k;
    cout<<endl<<endl;
    cout<<endl<<endl;

    // cout<<"Enter the Element to search :- ";
    // cin>>k;
    // if(searchElement(head,k))
    // {
    //     cout<<"Element "<<k<<" is available in the LL  "<<endl;
    // }
    // else
    // {
    //     cout<<"Element  "<<k<<" is NOT available in the LL  "<<endl;

    // }   

    // Node* rev=reverseLL(head);

    // cout<<endl<<endl;
    // print(rev);
    cout<<endl<<endl;

    cout<<endl<<endl;
    // Node* ans=reverseIter(head);
    // print(ans);



    // Node* afterDelHead=deleteNode(head,20);
    
    // print(afterDelHead);
    // Node* ansSwapNodes=swapNodes(head);

    // print(ansSwapNodes);

    cout<<endl<<endl;
    cout<<endl<<endl;

    // int k;
    // cout<<endl<<endl;

    // cout<<"Enter the Node you want to delete from the back :- "<<endl;

    // cin>>k;
    // cout<<endl<<endl;

    // Node* ans=removeNthNodeFromEnd(head,k);
    // print(ans);

    // Node* ans=mergeTwoSorted(head1,head2);
    // cout<<endl<<endl;
    // print(ans);
    // cout<<endl<<endl;
    // int k;
    // cout<<"Enter the rotation entity :- ";
    // cin>>k;
    // cout<<endl<<endl;


    // Node* rotate=rotateLL(head,k);
    // print(rotate);
    // cout<<endl<<endl;
    
    Node* nodeToDelete=head->next->next;
    //delete node without head

    Node* removeDup=removeDupSorted
    cout<<endl<<endl;

    print(head);

    cout<<endl<<endl;
    // print(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;


    return 0;


}
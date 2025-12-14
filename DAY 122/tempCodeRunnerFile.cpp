temp->next=temp->next->next;
    temp->next->next=NULL;
    temp=temp2->next;
    delete temp;
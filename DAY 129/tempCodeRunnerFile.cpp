 if(temp->next==NULL)
            {
                temp=NULL;

            }
            temp->data=temp->next->data;
            temp->next=temp->next->next;
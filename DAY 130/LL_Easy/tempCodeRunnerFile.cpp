Node* mergeKLists(vector<Node*>& list) 
// {
//     priority_queue<
//     pair<int, Node*>,              // 👈 element type
//     vector<pair<int, Node*>>,      // 👈 underlying container
//     greater<pair<int, Node*>>      // 👈 comparator
// > pq;
//     for(int i=0;i<list.size();i++)
//     {
//         if(list[i])
//         {
//             pq.push({list[i]->data,list[i]->data});
//         }
        
//     }

//    Node* dummy=new Node(-1);
//    Node* temp=dummy;

//    while(!pq.empty())
//    {
//         auto it=pq.top();
//         pq.pop();

//         if(it.second->next)
//         {
//             pq.push({it.second->data->next,it.second->next});
//         }

//         temp->next=it.second;
//         temp=temp->next;
//    }
// return dummy->next;
    
// }
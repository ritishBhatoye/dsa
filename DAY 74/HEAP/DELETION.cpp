#include<iostream>
using namespace std;

class Heap{
    public:
    int size;
    int arr[100];
    Heap(){
        size=0;
        arr[size]=-1;
    }
    
    void insert(int data)
    {
         size=size+1;
         int index=size;
         arr[index]=data;
         
         while(index > 1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                parent=index;
            }
            else
            {
                return ;
            }
         }
     }
     
   void print()
   {
    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteFromHeap()
{
    if(size==0){
        cout<<"NOTHING TO DELETE "<<endl;
        return ;
    }

    arr[1]=arr[size];
    size--;

    int i=1;
    while (i<size)
    {
    int left=2*i;
    int right=(2*i)+1;

    if(left<size && arr[i] < arr[left])
    {
        swap(arr[i],arr[left]);
        i=left;
    }
    else if(right<size && arr[i] <arr[right])
    {
      swap(arr[i],arr[right]);
      i=right;
    }
    else{
        return ;
    }
    }
}
};

int main()
{
    Heap h;
    h.insert(50);
    h.print();
    h.insert(55);
    h.print();
    h.insert(53);
    h.print();
    h.insert(52);
    h.print();
    h.insert(54);
    h.print();

    cout<<"AFTER DELETION : "<<endl;
    h.deleteFromHeap();
    h.print(); 

    return 0;
}
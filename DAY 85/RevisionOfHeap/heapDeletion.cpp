#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int size;
    int arr[100];

    MaxHeap(){
        size=0;
        arr[0]=-1;
    }

   void Insert(int val){
    
    size=size+1;
    int index=size;
    arr[index]=val;
    while(index > 1)
    {
        int parent=index/2;

        if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else{
            return ;
        }
    }

   }

   void delFromHeap(){
    if(size==0){
        cout<<"NOTHING TO DELETE "<<endl;
        return ;
    }
    
    arr[1]=arr[size];
    size--;
    int i=1;

    while(i < size)
    {
         int leftIndex=2*i;
         int rightIndex=2*i+1;

         if(leftIndex < size && arr[i] < arr[leftIndex] )
         {
              swap(arr[i],arr[leftIndex]);
              i=leftIndex;
         }
         else if(rightIndex < size && arr[i] < arr[rightIndex]){
            swap(arr[i],arr[rightIndex]);
            i=rightIndex;
         }
         else{
            return ;
         }

    }

   }
     void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
};


void heapify()
{
       
}


int main(){
    MaxHeap m;
    m.Insert(10);
    m.Insert(20);
    m.Insert(1);
    m.Insert(15);
    m.Insert(22);
   cout<<endl<<endl;
    m.print();
   cout<<endl<<endl;
   m.delFromHeap();
   m.print();
   cout<<endl<<endl;



    return 0;
}
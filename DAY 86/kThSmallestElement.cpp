// APPROACH 1 :-
// STEP 1 :- Sort Array in increasing order
// STEP 2 :- return arr[k-1] element will be required
#include<iostream>
using namespace std;
//CREATING AN ARRAY 
class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        size=0;
        arr[0]=-1;
    }

    void Insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index > 1){
            int parent=index/2;
            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return ;
            }
        }
    }

    void print(){
        for(int i=1;i<=5;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }

};
   void print(int arr[]){
        for(int i=1;i<=5;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left <= n && arr[largest] <arr[left] ){
        largest=left;
    }
   if(right <= n && arr[largest] < arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }

}

void heapSort(int arr[],int n){
    int size=n;

    while(size > 1){
    swap(arr[size],arr[1]);
    size--;
    heapify(arr,size,1);
    }
}

int KthElement(int arr[],int size){
      for(int i = size/2;i>0;i--)
    {
        heapify(arr,size,i);
    }
   heapSort(arr,size);
   print(arr);
   return arr[size-3];

}

int main()
{
    Heap h;
    h.Insert(7);
    h.Insert(10);
    h.Insert(4);
    h.Insert(20);
    h.Insert(15);
    cout<<endl<<endl;
    h.print();
    int size=6;
    cout<<endl<<endl;
    int arr[6]={-1,20,15,4,7,10};
    cout<<KthElement(arr,size)<<endl;
    cout<<endl<<endl;


    return 0;
}
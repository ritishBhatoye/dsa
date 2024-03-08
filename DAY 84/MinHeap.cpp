#include<iostream>
using namespace std;

class MinHeap{
    public:
    int arr[100];
    int size;

    MinHeap(){
    arr[0]=-1;
    size=0;
    }

    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index > 1 ){
            int parent =index/2;

            if(arr[parent] > arr[index])
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

void del(){
    if(size==0){
        cout<<"NOTHING TO DELETE "<<endl;
        return ;
    }
    //STEP 1:-
    arr[1]=arr[size];
    //STEP 2:-
    size--;  
    //STEP 3:-

    int i=1;
    while(i<size){
        int leftIndex=2*i;
        int rightIndex=2*i + 1;

        if(leftIndex< size && arr[i] < arr[leftIndex]){
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

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<n && arr[largest] < arr[left]){
        largest=left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
//     MinHeap h;
//     h.insert(10);
//     h.insert(20);
//     h.insert(30);
//     h.insert(40);
//     h.insert(50);
//     h.print();
//    cout<<endl<<endl;

    int arr[6]={-1,54,53,55,52,50};
   cout<<endl<<endl;
  
    int n=5;
   cout<<endl<<endl;

    for(int i=n/2;i>0;i--){
       heapify(arr,n,i);
    }
   cout<<endl<<endl;

   for(int i=1;i<=n;i++){
   cout<<arr[i]<<" ";
   }
   cout<<endl<<endl;
    return 0;
}
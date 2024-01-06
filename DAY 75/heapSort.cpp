#include<iostream>
using namespace std;

class heap{
    public:
    int size;
    int arr[100];

    heap(){
       size=0;
       arr[size]=-1;
    }

    void insert(int data)
    {
        size=size+1;
        int index=size;
        arr[index]=data;

        while(index > 1)
        {
         int parent=index/2;
         if(arr[parent] < arr[index]){
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
        int i=1;
        if(size==0)
        {
          cout<<"NOTHING TO DELETE "<<endl;
          return;
        }

        arr[1]=arr[size];
        size--;

        while(i<size){
            int left=2*i;
            int right=2*i+1;

            if(left < size && arr[i] < arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right < size && arr[i] < arr[right]){
                swap(arr[i],arr[right]);
                i=right;
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

    if(left <= n && arr[largest] < arr[left]){
        largest=left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest=right;
    }

    if (largest!=i)
    {
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
int main()
{
        cout<<endl<<endl;
   
    heap h;
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
    cout<<endl;
    cout<<"AFTER DELETION : "<<endl;
    h.del();
    h.print();
    cout<<endl;
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"Printing the array now "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,n);
    cout<<"Printing the array now "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    return 0;
}
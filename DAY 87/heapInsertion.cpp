#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int arr[100];
    int size;

    MaxHeap(){
        size=0;
        arr[0]=-1;
    }

    void insertHeap(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index > 1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
        }
    }
     
     void delHeap(){
        if(size==0){
            cout<<"NOTHING TO DELETE "<<endl;
        }

        arr[1]=arr[size];

        size--;

        int i=1;

        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;


            if(leftIndex<size && arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
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



int main()
{
    MaxHeap m;
    m.insertHeap(10);
    m.insertHeap(20);
    m.insertHeap(30);
    m.insertHeap(40);
    m.insertHeap(50);
    cout<<endl<<endl;
    m.print();
    m.delHeap();
    m.print();
    

    cout<<endl<<endl;


    return 0;
}
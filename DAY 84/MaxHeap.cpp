#include<iostream>
using namespace std;

class MaxHeap{

   public:
   int arr[100];
   int size;

   MaxHeap(){
    arr[0]=-1;
    size=0;
   }

   void insert(int val){
    size=size+1;
    int index=size;
    arr[index]=val;
    while(index > 1){
        int parent=index/2;
        if(arr[parent]<arr[index]){
           swap(arr[parent],arr[index]);
           index=parent;
        }
        else{
            return ;

        }
    }
   }

   void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
   }
};

int main(){

    MaxHeap m;
    m.insert(10);
    m.insert(20);
    m.insert(30);
    m.insert(40);
    m.insert(50);
    m.print();

    return 0;
}
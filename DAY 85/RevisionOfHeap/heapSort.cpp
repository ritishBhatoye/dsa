#include<iostream>
using namespace std;
 void heapify(int arr[],int n,int i)
  {

    int parent=i;
    int left=2*i;
    int right=2*i+1;

    if(left <=n && arr[parent]< arr[left] ){
        parent=left;

    }
    if(right <= n && arr[parent] < arr[right]){
      parent=right;
    }

    if(parent!=i){
        swap(arr[parent],arr[i]);
        heapify(arr,n,parent);
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
int main(){
  ////ACCORDING TO MAXHEAP
 
   cout<<endl<<endl;
   int arr[6] = {-1, 70, 60, 55, 45, 50};
   int n=5;
   for(int i=n/2;i>0;i--){
    heapify(arr,n,i);
   }

   cout<<endl<<endl;
   heapSort(arr,n);
   cout<<endl<<endl;




       for (int i = 1; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
   cout<<endl<<endl;


    return 0;
}
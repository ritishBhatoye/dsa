//OVER ALL IN THE INSERTION SORT THERE IS NO SWAPING ONLY SHIFTING IS TO BE DONE 

#include<iostream>
using namespace std;

void input(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void InsertionSort(int *arr,int size){
    //base case
    if(size==0 || size==1){
        return ;
    }

}
void InsertionSort(int *arr,int size){
    for(int i=0;i<size;i++)
    {
       int temp=arr[i];
       int j=i-1;
       while(j>=0){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
        j--;
       }
        arr[j+1]=temp;
    }
}

int main()

{  int size;
   cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
   cin>>size;
   int *arr;
   arr=new int[size];
   cout<<endl<<endl;
   input(arr,size);
   cout<<endl;
   print(arr,size);
   cout<<endl<<endl;
   InsertionSort(arr,size);
   cout<<"AFTER THE SORTING "<<endl;

   print(arr,size);
   
    return 0;
}
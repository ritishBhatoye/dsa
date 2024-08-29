#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}
void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void moveZeroToEnd(int* arr,int size)
{

   int i=0;
   for(int j=1;j<size;j++)
   {
    if(arr[j]!=0 && arr[i]==0){
        swap(arr[j],arr[i]);
        // i++;
    }
    else if(arr[i]!=0)
    {
          i++;  
    }
   }
   cout<<"AFTER ZEROS TO THE END :- "<<endl;
    printArr(arr,size);
}


int main(){
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SÍZE OF AN ARRAY :- "<<endl;
    cin>>size;
    int* arr=new int[size];
    inputArr(arr,size);
    moveZeroToEnd(arr,size);
 
    cout<<endl<<endl;
    return 0;
}
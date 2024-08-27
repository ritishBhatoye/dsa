#include<iostream>
using namespace std;

void inputArray(int* arr,int size)
{
 for(int i=0;i<size;i++)
 {
    cin>>arr[i];
 }
}

int secondSmallest(int* arr,int size)
{
 
   int max=0;
   int sMax=-1;
   
   for(int i=0;i<size;i++)
   {    
     
       if(max < arr[i] && max>sMax)
       {
          sMax=max;
          max=arr[i];
       }
   }
   return sMax;
}

int main()
{
    int size;

    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
    cin>>size;

    int* arr=new int[size];
    cout<<endl<<endl;

    inputArray(arr,size);
    cout<<endl<<endl;
    cout<<"SECOND LARGEST ELEMENT IN THE ARRAY :- "<<secondSmallest(arr,size)<<endl;
    cout<<endl<<endl;
    

    return 0;
}
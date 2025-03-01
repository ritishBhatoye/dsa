#include<iostream>

using namespace std;

int findUniqueElement(int arr[],int size)
{
   int ans=0;
   for(int i=0;i<size;i++)
   {
        ans=ans^arr[i];
   }
   return ans;
}


int main()
{
    int arr[7]={2,2,5,5,6,1,6};

    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<endl<<endl;
    cout<<"UNIQUE ELEMENT IN THE ARRAY :- "<<findUniqueElement(arr,size);
    cout<<endl<<endl;

    return 0;
}
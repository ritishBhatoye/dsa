#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
cout<<"Enter the element at "<<i<<" : ";
cin>>arr[i];
    }
}

void printArr(int* arr,int size)
{
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
}

int findUnique(int* arr,int size)
{

    int ans;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;

}

void removeDuplicateArr(int* arr,int size)
{
    int i=0;
    for(int j=1;j<size;j++)
    {

    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }   
}
printArr(arr,i+1);
}

int largestElement(int* arr,int size){
    int max=arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int secondLargestElement(int* arr,int size){
    int max=arr[0];
    int secondLarge=-1;

    for(int i=1;i<size;i++)
    {
        if(arr[i]>max){
            secondLarge=max;
            max=arr[i];
        }
        else if(arr[i]!=max && arr[i]>secondLarge)
        {
            secondLarge=arr[i];
        }

    }
    return secondLarge;
}

bool checkIfArraySorted(int* arr,int size)
{

    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;

}

void rotateArrayByOne(int* arr,int size)
{
    int last=arr[0];
    for(int i=1;i<size;i++)
    {
        arr[i-1]=arr[i];
    }

    arr[size-1]=last;

printArr(arr,size);
}
bool linearSearch(int* arr, int size,int k)
{
for(int i=0;i<size;i++){
    if(k==arr[i]){
        return true;
    }
}
return false;
}

bool binarySearch(int*arr,int size,int k){
    int mid=s+(e-s)/2;

    while(s!=e)
    {
        if(arr[mid]==k){
            return true;
        }
        else if(arr[mid] < k)
        {
            e=mid-1;
        }
        else if(arr[mid]>k){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return false;
}
void reverseArr(int* arr,int s,int e)
{
    while(s<e)
    {
        swap(arr[s++],arr[e--]);
    }
}

void roatateByDPlace(int* arr, int size,int k)
{
  if(k>size){
    k=k%size;
  }
  //reversing first set of elements
reverseArr(arr,0,k-1);
  //reversing SECOND set of elements
  reverseArr(arr,k,size-1);

  //REVERING ENTIRE ELEMENTS
  reverseArr(arr,0,size-1);
}

int main(){

    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of an array :- ";
    cout<<endl<<endl;
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);



    return 0;
}
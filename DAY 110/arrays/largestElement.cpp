#include<iostream>
#include<climits>

using namespace std;

int largestElement(int *arr,int size)
{
    int maxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxi=max(arr[i],maxi);
    }
    return maxi;
}

int main()
{

    cout<<endl<<endl;
    int arr[5]={3,5,10,40,20};
    cout<<endl<<endl;
    cout<<"Largest Element :- "<<largestElement(arr,5)<<endl;
    cout<<endl<<endl;
    
    return 0;
}
#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int *arr,int size)
{
    int largest = 0;
    int sLargest = INT_MIN;

    for(int i=0;i<size;i++)
    {
     
        if(largest < arr[i])
        {
            sLargest=largest;
            largest=arr[i];
        }
        else if(sLargest < arr[i] && arr[i] < largest)
        {
            sLargest=arr[i];
        }
    }
    return sLargest;
}



int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    int arr[6]= {1,2,4,7,7,5};

    cout<<"Second Largest Element :- "<<secondLargest(arr,6)<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
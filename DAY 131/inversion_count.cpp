#include<iostream>
using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
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
//using o(n^2) t.c
int inversionCount(int* arr,int size)
{
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]  > arr[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}


//o(logn)

int merge(int* arr,int s,int e)
{
    int mid = (s+e)/2;
    
    int l1 = mid - s + 1;
    int l2 = e - mid;

    int* first = new int[l1];
    int* second =  new int[l2];
    
    
    int k=s;

    for(int i=0;i<l1;i++)
    {
        first[i]=arr[k++];
    }

    k=mid+1;

    for(int i=0;i<l2;i++)
    {
        second[i]=arr[k++];
    }

    int ind1 = 0;
    int ind2 = 0;

    int mainInd = s;

    int cnt=0;
    while(ind1 < l1 && ind2 < l2)
    {
        if(first[ind1] <= second[ind2])
        {
            arr[mainInd++] = first[ind1++];
        }
        else
        {
            arr[mainInd++] = second[ind2++];
            cnt += (l1 - ind1);
        }
    }

    while(ind1 < l1)
    {
        arr[mainInd++] =  first[ind1++];

    }
    while(ind2 < l2)
    {
        arr[mainInd++] =  second[ind2++];
    }
    
    return cnt;
}


int mergeSort(int* arr,int s,int e)
{
    if(s>=e)
    {
        return 0;
    }

    int mid = (s+e)/2;

    
    int cnt = mergeSort(arr,s,mid) +  mergeSort(arr,mid+1,e);;

   

    return cnt+merge(arr,s,e);

}


int main()
{   
    cout<<endl<<endl;
    int size;
    cout<<"Enter the size of array :- ";
    cin>>size;
    int* arr=new int[size];
    cout<<endl<<endl;
    inputArr(arr,size);
    cout<<endl<<endl;
    printArr(arr,size);

    cout<<endl<<endl;
    // int ans=inversionCount(arr,size);
    int ans=mergeSort(arr,0,size-1);

    
    cout<<endl<<endl;
    cout<<"Ans :- "<<ans<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
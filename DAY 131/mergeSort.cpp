#inlude<iostream>
using namespa

void merge(int* arr,int s,int e)
{
    int mid=(s+e)/2;
    // copying 
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int k=s;
    int* first=new int[l1];
    int* second=new int[l2];

    for(int i=0;i<l1;i++)
    {
        first[i]=arr[k++];
    }

    for(int i=0;i<l2;i++)
    {
        second[i]=arr[k++];
    }

    int index1=0;
    int index2=0;

}

void mergeSort(int* arr,int s,int e)
{
    if(s>e)
    {
        return ;
    }
    int mid=(s+e)/2;

    mergeSort(arr,s,mid-1);

    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}


int main()
{
    return 0;
}
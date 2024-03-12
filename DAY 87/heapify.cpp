#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {

        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
        int arr[6]={-1,54,53,55,52,50};
        int size=5;
        cout<<endl<<endl;
        for(int i=size/2;i>0;i--){
            heapify(arr,size,i);
        }
        cout<<endl<<endl;

        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;



    return 0;
}
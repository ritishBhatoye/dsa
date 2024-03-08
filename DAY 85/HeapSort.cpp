#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[i])
    {
        largest = left;
    }
    if (right <= n && arr[right] < arr[i])
    {
        largest = right;
    }

    if (largest != i)
    {

        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[],int n)
{
   int size=n;

   while(size >1){
    //step 1: swap
    swap(arr[size],arr[1]);
    size--;
    heapify(arr,size,1);
   }

}
int main()
{
    cout << endl
         << endl;

    int arr[6] = {-1, 70, 60, 55, 45, 50};
    int arr1[6]={-1,54,53,55,52,50};
    int n=5;
     
    for(int i = n/2;i>0;i--){
        heapify(arr1,n,i);
    }
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    heapSort(arr1,n);
    cout<<endl;
    for(int i=1;i<=5;i++){
        cout<<arr1[i]<<" ";
    }

    cout << endl
         << endl;

    return 0;
}
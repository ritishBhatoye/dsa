#include<iostream>
using namespace std;

void inputArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at " << i << " : ";
        cin >> arr[i];
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void insertionInAnArray(int* arr,int& size,int k,int p)
{
    if(p>size || p<0)
    {
        cout<<"PLEASE ENTER VALID INDEX "<<endl;
    }
    if(p==size-1)
    {
        size=size+1;
        arr[size-1]=k;
    }
    


    for(int i=size;i>p;i--)
    {
        
        arr[i]=arr[i-1];

    }
    
    arr[p]=k;

size++;
    
}

int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of an array ";
    cin>>size;
    cout<<endl;
    int* arr=new int[size+1];
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"Enter the element to insert :- ";
    int k;
    cin>>k;
    cout<<endl;
    int p;
    cout<<"Enter the Position(index) :- ";
    cin>>p;
    cout<<endl<<endl;
    insertionInAnArray(arr,size,k,p);
    cout<<"After INSERTION of new element :- ";
    printArr(arr,size);
    cout<<endl<<endl;


    return 0;
}
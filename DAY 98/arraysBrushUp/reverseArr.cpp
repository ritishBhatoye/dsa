#include<iostream>
using namespace std;


void inputArr(int *arr,int size){
    cout<<"ENTER THE NUMBER OF ELEMENT IN AN ARRAY : "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArray(int *arr,int size){
    cout<<"ELEMENTS ENTERED BY USER :- "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

void reverse(int *arr,int size){
    int s=0,e=size-1;
    while(s!=e)
    {
        
        swap(arr[s],arr[e]);

        s++;
        e--;
    }

}

int main()
{
    int size;
    cout<<"ENTER THE SIZE OF AN ARRAY "<<endl;
    cin>>size;
    
    int *arr=new int[size];
    cout<<endl;
    inputArr(arr,size);

    printArray(arr,size);
    // cout<<"AFTER REVERSING ARRAY "<<endl;
    cout<<endl;

    reverse(arr,size);
    cout<<"AFTER REVERSEING "<<endl;
    printArray(arr,size);


    return 0;
}
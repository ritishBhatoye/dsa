#include<iostream>
using namespace std;
void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}

bool isPresent(int *arr,int size,int ele)
{
    for(int i=0;i<size;i++)
    {
        if(ele==arr[i]){
            return true;
        }
    }

    return false;
}

int main()
{
    int size,e;
    int *arr=new int[size];
    cout<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- ";
    cin>>size;
    cout<<endl;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl;
    cout<<"ENTER THE ELEMEMNT TO CHECK WHETHER IT IS PRESENT OR NOT ";
    cin>>e;
    if(isPresent(arr,size,e))
    {
    cout<<e<<" is present "<<endl;
    }
    else{
        cout<<e<<" is not present"<<endl;
    }
    cout<<endl;
    return 0;
}
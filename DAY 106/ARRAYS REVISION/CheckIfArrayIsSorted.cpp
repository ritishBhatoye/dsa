#include<iostream>
using namespace std;


void inputArray(int* arr,int size)
{
cout<<"ENTER THE ELEMENTS IN THE ARRAY :- "<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}

bool checkIfArraySorted(int* arr,int size)
{

    int s=0;
    int e=size-1;

    while(s<=e)
    {
        if(arr[s++]>arr[e--])
        {
           return false;
        }
    }

    return true;

}



int main()
{
    int size;
    cout<<endl<<endl;
    cout<<"ENTER THE SIZE OF AN ARRAY :- "<<endl;
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    inputArray(arr,size);
    cout<<endl<<endl;
    if(checkIfArraySorted(arr,size)){
        cout<<"ARRAY IS SORTED"<<endl;
    }

    else{
        cout<<"ARRAY IS NOT SORTED"<<endl;
    }
    cout<<endl<<endl;


    
    return 0;
}
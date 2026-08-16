#include<iostream>
using namespace std;

bool linearSearch(int* arr,int size, int k)
{
    for(int i=0;i < size;i++)
    {
        if(arr[i]==k)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    cout<<endl<<endl;
    int arr[5]={5,10,2,40,1};
    cout<<endl<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<endl<<endl;
    cout<<endl<<endl;
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    if(linearSearch(arr,size,k))
    {
        cout<<"Element "<<k<<" is present"<<endl;
    }
    else
    {
        cout<<"Element "<<k<<" is NOT present"<<endl;
    }
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    return 0;
}

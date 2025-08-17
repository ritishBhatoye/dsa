#include<iostream>
using namespace std;

void input_arr(int* arr,int size)
{
    cout<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl;

}

void print_arr(int* arr,int size)
{
    cout<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


string select_searching_technique() {
    string choice;
    cout << "Select Searching Technique (Linear or Binary): ";
    cin >> choice;

    if (choice == "Linear") {
        return "linear_search";
    } 
    else if (choice == "Binary") {
        return "binary_search";
    } 
    else {
        return "Please select valid approach";
    }
}

int linear_search(int* arr,int size,int k)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
            return i;
            break;
        }
    }
    return -1;
}


int binary_search(int* arr,int size,int k)
{
    int s=0;
    int e=size-1;
    
    while(s<e)
    {
        int mid=s+(e-s)/2;

        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{

    int size;
    cout<<endl<<endl;
    cout<<"Enter the size  of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    int* arr=new int[size];
    input_arr(arr,size);
    cout<<endl<<endl;
    
    print_arr(arr,size);
    cout<<endl<<endl;   
    int k;
    cout<<"Enter the element you want to search :- ";
    cin>>k;
    cout<<endl<<endl;
    string searching_technique=select_searching_technique();
    cout<<"Selected Searching Technique :- "<<searching_technique<<endl;
    int ans=0;
    
    if(searching_technique=='linear_search')
    {
    ans=linear_search(arr,size,k);
    }
    else if(searching_technique=='binary_search')
    {
        ans=binary_search(arr,size,k);
    }
    if(ans==-1){
    cout<<"Element "<<k<<" doesn't exist. Please enter valid element"<<endl;
    }
    else
    {
    cout<<"Element "<<k<<" is present at "<<ans;
    }

    cout<<endl<<endl;

    return 0;
}
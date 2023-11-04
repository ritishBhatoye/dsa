#include <iostream>
using namespace std;

bool BS(int *arr,int size,int x){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans;
    while(s<=e){
       if(arr[mid]==x){
        ans=mid;
        return ans;
       }
       else if(arr[mid]>x){
        e=mid-1;
       }
       else{
        s=mid+1;
       }
       mid=(s+e)/2;
    }

}

bool BS_rec(int *arr,int s,int e,int x){
    int mid=(s+e)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==x){
        return true;
    }
   else{ 
    if(arr[mid]>x){
        return BS_rec(arr,s,mid-1,x);
    }
   else if(arr[mid]<x){
        return BS_rec(arr,mid+1,e,x);
    }
   }
}

void input(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool LS_Rec(int *arr, int size, int x)
{
if(size==0){
    return false;
}
if(arr[0]==x){
    return true;
}
else{
    return LS_Rec(arr+1,size-1,x);
    }
}
int main()
{
    int size;
    cout << endl
         << endl;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> size;
    int arr[size];
    input(arr, size);
    cout << "ENTERED ELEMENTS IN AN ARRAY : ";
    print(arr, size);
    int x;
    cout << "ENTER THE ELEMENT YOU WANT TO SEARCH : ";
    cin >> x;
    if (BS_rec(arr,0,size-1, x))
    {
        cout << "ELEMENT " << x << " IS PRESENT " << endl;
    }
    else
    {
        cout << "ELEMENT " << x << " IS NOT PRESENT " << endl;
    }
    cout << endl
         << endl;
    return 0;
}
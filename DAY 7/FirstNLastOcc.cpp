#include<iostream>
using namespace std;
void user_input(vector<int> &arr, int size)
{
    cout << "ENTER THE ELEMENTS IN AN ARRAY YOU WANT TO INSERT : " << endl;
    int a;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void sort(vector<int> &arr, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] >= arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    print(arr, size);
}
int FirstOcc(vector<int> &arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
    if(arr[mid]==key){
    e=mid-1;
    ans=mid;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}
int LastOcc(vector<int> &arr,int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
    if(arr[mid]==key){
    s=mid+1;
    ans=mid;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
   vector<int> arr;
   int size;
   cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
   cin>>size;
   user_input(arr,size);
   cout<<"ENTERRED ELEMENTS IN AN ARRAY "<<endl;
   print(arr,size);
   cout<<" AFTER SORTING "<<endl;
   sort(arr,size);
   int key;
   cout<<"ENTER THE ELEMENT YOU WANT TO SEARCH "<<endl;
   cin>>key;
   int index=FirstOcc(arr,size,key);
   int lindex=LastOcc(arr,size,key);
   cout<<"FIRST OCCURENCE OF "<<key<<" IS AT "<<index<<" POSITION"<<endl;
    cout<<"LAST OCCURENCE OF "<<key<<" IS AT "<<lindex<<" POSITION"<<endl;
    return 0;
}

#include<iostream>
#include <cstdlib>
#include<vector>

using namespace std;

void inputArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the element at "<<i<<" : ";
    cin>>arr[i];
    }
}

void inputVector(vector<int>& arr,int size)
{
    for(int i=0;i<size;i++){
    cout<<"Enter the element at "<<i<<" : ";
    cin>>arr[i];
    }
}

//more optmized
vector<int> find_duplicate(vector<int>& arr,int size){

    vector<int> ans;
    
    for(int i=0;i<size;i++)
    {
        if(arr[abs(arr[i])-1]<0){
            ans.push_back(abs(arr[i]));
        }
        arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
    }
    return ans;
}

void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int find_duplicate_love_babbar(int* arr,int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<size-1;i++){
        ans=ans^i;
    }
    return ans;
}




int main(){

    int size;
    cout<<endl<<endl;
    cout<<"Enter the size of an array :- ";
    cin>>size;
    cout<<endl<<endl;
    vector<int> arr(size);
    cout<<endl<<endl;
    inputVector(arr,size);
    cout<<endl<<endl;
    cout<<"Duplicate Elements :- ";
    cout<<endl<<endl;
    vector<int> ans=find_duplicate(arr,size);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 
    cout<<endl<<endl;

    return 0;
}
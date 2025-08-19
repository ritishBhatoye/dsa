#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


//brute force approach

int majority_element_brute(int* arr,int size)
{
   
    int ans=-1;
    for(int i=0;i<size;i++){
        int cnt=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
                
            }
            if(cnt>(size/2))
            {
                ans=arr[i];
            }

        }
    }
    return ans;
}

int majority_element(int* arr,int size)
{
    unordered_map<int,int> mpp;

    for(int i=0;i<size;i++)
    {
        int num=arr[i];
        mpp[num]++;
        if(mpp[num] > (size/2))
        {
            return num;
            break;
        }

       
    }
return -1;
}
int main(){
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array Array :- ";
    cin>>size;
cout<<endl;
int* arr=new int[size];

inputArr(arr,size);
cout<<endl;

printArr(arr,size);
cout<<endl;
int ans=majority_element_brute(arr,size);
cout<<"Majority Element :- "<<ans;
    cout<<endl<<endl;
   

cout<<endl;

    cout<<endl<<endl;


    return 0;
}
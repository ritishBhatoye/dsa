#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;


void inputArr(vector<int>& arr, int size) {
    arr.resize(size); // Resize vector to 'size'
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at " << i << " : ";
        cin >> arr[i];
    }
}

void printArr(const vector<int>& arr) {
    int size=arr.size();
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}



pair<int> first_and_last_occ(int* arr , int size ,int k)
{

    int s=0;
    int e=size-1;
    pair<int> ans;
    while(s<=e)
    {
        int mid = s+(e-s)/2;

        if(arr[mid] == k)
        {
            e = mid - 1;

            ans.first = mid;
        }
        else if(arr[mid] < k )
        {
            s = mid + 1;
        }
        else 
        {
            e=mid-1;

        }
    }

    //last occurence

    while(s<=e)
    {
        int mid = s+(e-s)/2;

        if(arr[mid] == k)
        {
            s = mid + 1;

            ans.second = mid;
        }
        else if(arr[mid] < k )
        {
            s = mid + 1;
        }
        else 
        {
            e=mid-1;

        }
    }
return ans;
}



int main(){
    cout<<endl<<endl;
int size;
    cout<<endl<<endl;
cout<<"Enter the size of an array ";
    cin>>size;
cout<<endl;
vector<int> arr;
inputArr(arr,size);
cout<<endl;
printArr(arr);
    cout<<endl<<endl;
    int target;
    cout<<"Enter the target :- ";
    cin>>target;

    cout<<endl<<endl;
    pair<int> ans = first_and_last_occ(arr,size,k);
    cout<<"First Occurence :- "<<ans.first>>endl;"  Last Occurence :- " << anss
    


    cout<<endl<<endl;
    
    cout<<endl<<endl;


    return 0;
}
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

vector<int> two_sum_brute(vector<int>& arr,int size,int k)
{
    vector<int> ans;

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==k){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return ans;
}

///only for sorted
vector<int> two_sum(vector<int>& arr,int size,int k)
{
    sort(arr.begin(),arr.end());
    vector<int> ans;
    int s=0;
    int e=size-1;

    while(s<e)
    {
        int sum=arr[s]+arr[e];
        if(k==sum)
        {
           ans.push_back(min(s,e));
           ans.push_back(max(s,e)); 
            break;
        }
        else if(k>sum)
        {
            s++;
        }
        else {
            e--;
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
    
    vector<int> result=two_sum_brute(arr,size,target);
    printArr(result);  
    cout<<endl<<endl;


    return 0;
}
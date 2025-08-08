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


//love babbar (BRUTE FORCE)
vector<vector<int>> pairSum(vector<int> &arr,int size,int target){
vector<vector<int>> ans;

for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]+arr[j]==target)
        {
            vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));

            ans.push_back(temp);
        }
    }
}
sort(ans.begin(),ans.end());
return ans;
}

//OPTMIZED APPROACH /Striver approach
vector<vector<int>> pair_sum_striver(vector<int>& arr,int size,int target)
{
vector<vector<int>> ans;

sort(arr.begin(),arr.end());
int left=0;
int right=size-1;
while(left<right){
    int sum=arr[left]+arr[right];
    if(sum==target)
    {

        vector<int> temp;
        temp.push_back(min(arr[left],arr[right]));
        temp.push_back(max(arr[left],arr[right]));

        ans.push_back(temp);

        // Skip duplicates
        int leftVal = arr[left];
        int rightVal = arr[right];
        while (left < right && arr[left] == leftVal) left++;
        while (left < right && arr[right] == rightVal) right--;
    }
    else if(sum<target)
    {
        left++;
    }
    else{
        right--;
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

    vector<vector<int>> result=pair_sum_striver(arr,size,target);

    for (int i = 0; i < result.size(); i++) {
        printArr(result[i]);  
    }
    cout<<endl<<endl;


    return 0;
}
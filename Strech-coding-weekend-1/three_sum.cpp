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

vector<vector<int>> findTriplets(vector<int> arr, int size, int K) {
    vector<vector<int>> ans;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) { // ? start from j+1
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == K) { // ? compare to K, not loop variable
                    ans.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
	
    return ans;
}


///only for sorted
vector<vector<int>> three_sum(vector<int>& arr,int size,int K)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;

    for(int i=0;i<size;i++)
    {
        if(i!=0 && arr[i]==arr[i-1])
        {
            continue;
        }
    
    int j=i+1;

    int k=size-1;

    while(j<k)
    {
        int sum=arr[i]+arr[j] + arr[k];
        else if(K>sum)
        {
            j++;
        }
        else
        {
           ans.push_back({arr[i],arr[j],arr[k]}) 
           j++;
           k--;

           //skip duplicated

           while(j<k && arr[j]==arr[j-1]) j++;
           while(j<k && arr[k]==arr[k+1]) k--;

        }
        
        else {
            k--;
        }
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
    
    vector<vector<int>> result=findTriplets(arr,size,target);
    
    cout<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        printArr(result[i]);
    }
    cout<<endl<<endl;


    return 0;
}
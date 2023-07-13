#include<iostream>
using namespace std;
void user_input(vector<int> &arr,int size){
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
void MergeTwoSortedArrays(vector<int> &arr1,vector<int> &arr2,int size){
   int s1=arr1.size();
   int s2=arr2.size();
    vector<int> arr3;
    int i=s1+s2-1,j=s2-1;
    while(s){
     if(arr1[i]>arr2[j]){
        arr1.push_back(arr2[j]);
        j--;
     }
     else{
        arr1.push_back(arr2[j]);
        j++;
     }
    }
    while(i<s1){
      arr1.push_back(arr1[i]);
      i++;
    }
    while(j<s2){
        arr1.push_back(arr2[j]);
        j++;
    }
    print(arr1,size);
}
int main(){
    vector<int> arr1;
    vector<int> arr2;
    int s1;
    int s2;
    cout<<"ENTER THE SIZE OF FIRST ARRAY "<<endl;
    cin>>s1;
    cout<<"ENTER THE SIZE OF SECOND ARRAY "<<endl;
    cin>>s2;
    user_input(arr1,s1);
    user_input(arr2,s2);
    cout<<"ENTERRED ELEMENTS IN FIRST ARRAY "<<endl;
    print(arr1,s1);
    cout<<"ENTERRED ELEMENTS IN SECOND ARRAY "<<endl;
    print(arr2,s2);
    int size=s1+s2;
    cout<<"MERGING TWO SORTED ARRAYS  "<<endl;
    MergeTwoSortedArrays(arr1,arr2,size);
    return 0;
}
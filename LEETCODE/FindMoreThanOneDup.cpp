// #include<iostream>
// #include<vector>
// using namespace std;
// void user_input(vector<int> &arr,int size){
//     int a;
//     cout<<"ENTER THE ELEMENT YOU WANT TO INSERT : "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>a;
//         arr.push_back(a);
//     }
// }
// void print(vector<int> &arr,int size){
    
//     for(int i=0;i<size;i++){
//        cout<<arr[i]<<endl;
//     }
// }
// void dup(vector<int> &arr,int size){
//     vector<int> ans;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                ans.push_back(arr[i]);
//             }
//         }
//     }
//     cout<<"DUPLICATE ELEMENTS IN AN ARRAY "<<endl;
//     size=ans.size();
//     print(ans,size);
// }
// int main(){
//     int s;
//     vector<int> arr;
//     cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
//     cin>>s;
//     user_input(arr,s);
//     cout<<"ENTERED ELEMENTS ARE : "<<endl;
//     print(arr,s);
//     dup(arr,s);
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> arr, int size)
{   
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void user_input(vector<int> &arr,int size){
    int a;
    cout<<"ENTER THE ELEMENT YOU WANT TO INSERT : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
}
void print(vector<int> &arr,int size){
    
    for(int i=0;i<size;i++){
       cout<<arr[i]<<endl;
    }
}
void dup(vector<int> &arr,int size){
    vector<int> ans;
    sort(arr,size);
    for(int i=0;i<size-1;i++){
            if(arr[i]==arr[i+1]){
               ans.push_back(arr[i]);
            }
    }
    cout<<"DUPLICATE ELEMENTS IN AN ARRAY "<<endl;
    size=ans.size();
    print(ans,size);
}

int main(){
    int s;
    vector<int> arr;
    cout<<"ENTER THE SIZE OF AN ARRAY : "<<endl;
    cin>>s;
    user_input(arr,s);
    cout<<"ENTERED ELEMENTS ARE : "<<endl;
    print(arr,s);
    dup(arr,s);
    return 0;
}
#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

void inputArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printArr(int *arr,int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

bool uniqueOccurrences(int *arr){
    map<int,int> mp;
    for(it x:mp){
        mp[x]+=1;
    }
    set<int> st;
    for(auto it:mp)
    {
        if(st.count(it.second)>0)
            return false;
        else
            st.insert(it.second);
    }
    return true;
}

int main()
{
    int size;
    int *arr=new int[size];
    cout<<"ENTER THE SIZE OF AN ARRY :- ";
    cin>>size;
    inputArr(arr,size);
    cout<<endl;
    printArr(arr,size);
    cout<<endl<<endl;
    if(uniqueOccurrences(arr)){
        cout<<"UNIQUE OCCURENCES OF ELEMENTS IS PRESENT "<<endl;
    }
    else{
        cout<<"UNIQUE OCCURENCES OF ELEMENTS IS NOT PRESENT "<<endl;

    }

    return 0;
}
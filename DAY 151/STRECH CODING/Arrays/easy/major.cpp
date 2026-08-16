#include<iostream>
#include<vector>
using namespace std;


void printArr(int* arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// 5^0=5;
// 5^5=0;
int uniqueElement(int* arr,int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans =  ans^arr[i];
    }
    return ans;

}

int duplicatesInArray(int* arr,int size)
{
    vector<int> map(size,0);

    for(int i=0;i<size;i++)
    {
        map[arr[i]]++;
    }

    for(int i=0;i<map.size();i++)
    {
        if(arr[i]==2)
        {
            return i;
        }
    }
return -1;
}

vector<int> arrayIntersection(int* a,int* b,int s1,int s2)
{
    int i=0;
    int j=0;

    vector<int> ans;

    while(i < s1 && j<s2)
    {
        if(a[i]==b[j])
        {
            ans.push_back(a[i]);
        }
        else if(a[i]<)
    }
}

int main()
{
    cout<<endl<<endl;
    int arr[7]={2,5,6,10,20,50,100};
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}

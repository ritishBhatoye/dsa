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

void printVector(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

vector<int> unionArr(int* a,int* b,int aSize,int bSize)
{
    int n1=aSize;
    int n2=bSize;
    int i=0,j=0;
    vector<int> ans;
    while(i<n1 && j<n2)
    {
        if(a[i] <= b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j])
        {
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<n1)
    {
        ans.push_back(a[i++]);
    }
    while(j<n2)
    {
        ans.push_back(b[j++]);
    }

    return ans;
}

int main()
{
    cout<<endl<<endl;
    int a[5]={1,2,3,4,5};
    int b[5]={4,5,10,15,20};
    cout<<endl<<endl;
    int aSize=sizeof(a)/sizeof(a[0]);
    int bSize=sizeof(b)/sizeof(b[0]);
    vector<int> ans= unionArr(a,b,aSize,bSize);
    cout<<endl<<endl;
    cout<<"Union of Arrays :- ";
    printVector(ans);
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}

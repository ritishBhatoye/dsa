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
void printVector(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
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
            ans.push_back(a[i++]);
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<a[i])
        {
            j++;
        }
    }
    return ans;
}

vector<vector<int>> pairSum(int* arr,int size,int k)
{
    vector<vector<int>> ans;

    int s = 0;
    int e = size;

    while(s<e)
    {
        int sum = arr[s]+arr[e];
        if(sum==k)
        {
            vector<int> p;
            p.push_back(arr[s]);
            p.push_back(arr[e]);
            ans.push_back(p);
        }
        else if(sum<k)
        {
            s++;
        }
        else if(sum > k)
        {
            e--;
        }
    }
    return ans;
}

void sort012(int* arr,int size)
{
    int i=0;

    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    while(i<size)
    {
        if(arr[i]==0)
        {
            countZero++;
            i++;
        }
        else if(arr[i]==1)
        {
            countOne++;
            i++;

        }
        else
        {
            countTwo++;
            i++;

        }
    }

    int j=0;

    while(j<size && countZero!=0)
    {
        arr[j++]=0;
        countZero--;
    }

     while(j<size && countOne!=0)
    {
        arr[j++]=1;
        countOne--;
    }

     while(j<size && countTwo!=0)
    {
        arr[j++]=2;
        countTwo--;
    }


}

int main()
{
    cout<<endl<<endl;
    int uniqueArr[13]={17, -4, 23, 17, 91, -4, 56, 23, 91, 8, 56, 42, 8};
    cout<<endl<<endl;
    cout<<"Unique Element :- "<<uniqueElement(uniqueArr,13);
    cout<<endl<<endl;
    int dupliArr[6]={3,4,5,1,2,5};
    cout<<endl<<endl;
    cout<<"Duplicate Element is :- "<<duplicatesInArray(dupliArr,6)<<endl;
    cout<<endl<<endl;
    int interArray
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}

#include<iostream>
#include<vector>

using namespace std;

void inputArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at :- ";
        cin>>arr[i];
    }
}
void printArr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

vector<int> findUnion(vector<int>& a,vector<int>& b)
{
    vector<int> ans;
    int i=0;
    int j=0;
    int s1=a.size();
    int s2=b.size();
    
    while(i<s1 && j<s2)
    {
        if(a[i]<=b[j])
        {
            if(ans.size()==0 || ans.back()!=a[i])
            {   
                ans.push_back(a[i]);
                i++;
            }else
            {
                if(ans.size()==0 || ans.back()!=b[j])
                {
                    ans.push_back(ans[j]);
                    j++;
                }
            }
        }
    }
    while(i<s1)
    {
        if(ans.back()!=a[i])
        {
            ans.push_back(a[i]);
            i++;
        }
    }
    while(j<s2)
    {
        if(ans.back()!=b[j])
        {
            ans.push_back(b[j]);
            j++;
        }
    }
    return ans;
}

int main()
{

    cout<<endl<<endl;
    int size;
    vector<int> a={1,2,3,4,5};
    vector<int> b={2,3,4,4,5};
    vector<int>ans=findUnion(a,b);
    cout<<"UNION OF THE ARRAY :- "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<endl<<endl;

    return 0;
}
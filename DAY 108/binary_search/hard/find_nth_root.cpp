#include<iostream>
#include<vector>

using namespace std;

int result(int mid,int n)
{
  long long int ans=1;

  for(int i=1;i<=mid;i++)
  {
    ans=ans*n;
  }
//   cout<<"ANS :- "<<ans<<endl;
//   if(ans==m)
//   {
//     return 0;
//   }

//    if(ans<m)
//   {
//     return -1;
//   }
//    return 1;

return ans;
}


int NthRoot(int n, int m) 
{

int s = 1;

int e = n;


while(s<=e)
{
  int mid=s+(e-s)/2;
  long long int check = result(mid,n);
  cout<<endl<<endl;
  cout<<"CHECK RESULT :- "<<check<<endl;
  cout<<endl<<endl;
  int ans=1;
  
  if(check==m)
  {
    return mid;
    break;
  }
  else if(check<m)
  {
    s=mid+1;
  }
  else
  {
    e=mid-1;
  }

}
  return -1;
}




int main()
{
    cout<<endl<<endl;
    cout<<endl<<endl;
    cout<<"Nth Root :- "<<NthRoot(3,27)<<endl;
    // cout<<"RESULT :- "<<result(3,2)<<endl;

    cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
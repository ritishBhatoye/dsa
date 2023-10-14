#include<iostream>
#include<queue>
using namespace std;
//FOR K=2
void print(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void QueueSlidingWindow(deque<int> &q,vector<int> &ans,int k)
{  
  if(q.back()==q.front() ){
    return ;
  }

  int n1=q.front();
  q.pop_front();
  int n2=q.front();
  q.pop_front();


        if(n1>n2 && n2<0){
             ans.push_back(n2);
         }
         else if(n2>n1 && n1<0){
             ans.push_back(n1);
         }
         else
         {
             ans.push_back(0);
         }


q.push_front(n2);
QueueSlidingWindow(q,ans,k-1);
}

int main(){
    vector<int> ans;
    deque<int> d;
    d.push_back(12);
    d.push_back(-1);
    d.push_back(-7);
    d.push_back(8);
    d.push_back(-15);
    d.push_back(30);
    d.push_back(16);
    d.push_back(28);
    cout<<endl<<endl;
  QueueSlidingWindow(d,ans,3);
    // cout<<"FRONT "<<d.front()<<endl;
    // cout<<"REAR  "<<d.bac<<endl;
    cout<<endl;
  print(ans);
    cout<<endl<<endl;

    return 0;
}



































// void QueueSlidingWindow(queue<int> &q,int k)
// {
//      vector<int> ans;
//     //base case
//     if(ans.size()==(q.size()-1)) {
//         return ;
//     }


//         int n1=q.front();
//         q.pop();
//         int n2=q.front();
//         q.pop();

//   for(int i=0;i<k;i++){ 
//          if(n1>n2 && n2<0){
//             ans.push_back(n2);
//         }
//         else if(n2>n1 && n1<0){
//             ans.push_back(n1);
//         }
//         else
//         {
//             ans.push_back(0);
//         }
//         QueueSlidingWindow(q,k+2);
//         }
// print(ans);
// } 
// #include<iostream>
// #include<queue>
// using namespace std;
// //FOR K=2
// void print(vector<int> &arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void QueueSlidingWindow(deque<int> &q,vector<int> &ans)
// {  
//   if(q.back()==q.front()){
//     return ;
//   }

//   int n1=q.front();
//   q.pop_front();
//   int n2=q.front();
//   q.pop_front();
//          if(n1>n2 && n2<0){
//              ans.push_back(n2);
//              }
//          else if(n2>n1 && n1<0){
//              ans.push_back(n1);
//          }
//          else
//          {
//              ans.push_back(0);
//          }
// q.push_front(n2);
// QueueSlidingWindow(q,ans);
// }

// int main(){
//     vector<int> ans;
//     deque<int> d;
//     d.push_back(-8);
//     d.push_back(2);
//     d.push_back(3);
//     d.push_back(-6);
//     d.push_back(10);
//     cout<<endl<<endl;
//   QueueSlidingWindow(d,ans);
//     // cout<<"FRONT "<<d.front()<<endl;
//     // cout<<"REAR  "<<d.bac<<endl;
//     cout<<endl;
//   print(ans);
//     cout<<endl<<endl;

//     return 0;
// }



































// void QueueSlidingWindow(queue<int> &q,int k)
// {
//      vector<int> ans;
//     //base case
//     if(ans.size()==(q.size()-1)) {
//         return ;
//     }


//         int n1=q.front();
//         q.pop();
//         int n2=q.front();
//         q.pop();

//   for(int i=0;i<k;i++){ 
//          if(n1>n2 && n2<0){
//             ans.push_back(n2);
//         }
//         else if(n2>n1 && n1<0){
//             ans.push_back(n1);
//         }
//         else
//         {
//             ans.push_back(0);
//         }
//         QueueSlidingWindow(q,k+2);
//         }
// print(ans);
// } 

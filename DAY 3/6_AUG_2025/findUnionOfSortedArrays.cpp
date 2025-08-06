#include<iostream>
#include<vector>
using namespace std;


void inputArr(int* arr,int size){
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at "<<i<<" : ";
        cin>>arr[i];
    }
}

void printArr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void findUnionOfElements(int* arr1,int* arr2,int size1,int size2)
{

    vector<int> temp;

    int i=0;
    int j=0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<=arr2[j]){
            if(temp.size()==0 || temp.back()!=arr1[i])
            temp.push_back(arr1[i]);
i++;
        }
        else{
            if(temp.size()==0 || temp.back()!=arr2[j])
            temp.push_back(arr2[j]);
            j++;
        }

    }
    while( j<size2)
    {
       
        
            if(temp.size()==0 || temp.back()!=arr2[j])
            temp.push_back(arr2[j]);
            j++;
        

    }
    while(i<size1)
    {
      
            if(temp.size()==0 || temp.back()!=arr1[i])
            temp.push_back(arr1[i]);
i++;
    


    }

   for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" "; 
   }
}

int main(){
    cout<<endl<<endl;
int size1;
int size2;
    cout<<endl<<endl;
cout<<"Enter the size of an array Arr1 :- ";
    cin>>size1;
cout<<endl;
cout<<"Enter the size of an array Arr2 :- ";
    cin>>size2;
int* arr1=new int[size1];
int* arr2=new int[size2];

inputArr(arr1,size1);
cout<<endl;

printArr(arr1,size1);
cout<<endl;

inputArr(arr2,size2);
cout<<endl;

printArr(arr2,size2);


    cout<<endl<<endl;
   

cout<<endl;
findUnionOfElements(arr1,arr2,size1,size2);
    cout<<endl<<endl;


    return 0;
}
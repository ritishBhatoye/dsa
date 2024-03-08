#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int size;
    int arr[100];

    MaxHeap(){
        size=0;
        arr[0]=-1;
    }

void insert(int val){
    size=size+1;
    int index=size;
    arr[index]=val;

    while(index > 1)
    {
        int parent=index/2;
        
        if(arr[parent] < arr[index] ){
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else{
            return ;
        }
    }
    
}

void print(){
for(int i=1;i<=size;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}
};

int main(){
    MaxHeap m;
    cout<<endl<<endl;
    m.insert(10);
    m.insert(20);
    m.insert(1);
    m.insert(5);
    m.insert(200);
    m.print();
    cout<<endl<<endl;

    return 0;
}
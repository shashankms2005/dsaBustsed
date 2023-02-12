#include<iostream>
using namespace std;

void selectionsort(int arr[],int n,int standardindex){
    //base case
    if(standardindex>=n-1)
    return;

    int min=standardindex;
    for(int i=standardindex+1;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
        swap(arr[min],arr[standardindex]);
   

     return selectionsort(arr,n,standardindex+1);
}
int main(){
    int arr[100];
    int size;
    cout<<"enter array size and ele: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int standardindex=0;
    selectionsort(arr,size,standardindex);
    cout<<"elements after selection sort: "<<endl;
       for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}
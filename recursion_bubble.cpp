#include<iostream>
using namespace std;

void bubblesort(int *arr,int n){
    if(n==0 || n==1)
    return;

    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    return bubblesort(arr,n-1);
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
    bubblesort(arr,size);
    cout<<"elements after bubble sort: "<<endl;
       for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}
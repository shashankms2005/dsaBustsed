#include<iostream>
using namespace std;
void selectsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
   for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
   }
}
int main(){
    int arr[100]={0};
    int size=0;
    cout<<"enter size: "<<endl;
    cin>>size;
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    selectsort(arr,size);
 
    return 0;
}
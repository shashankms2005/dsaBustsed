#include<iostream>
#include<algorithm>
using namespace std;
 void duplicate(int arr[],int size){
    cout<<"duplicates:"<<endl;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
             if(arr[i]==arr[j]){ 
               cout<<arr[i]<<" ";
             }
         }
    }
  
}
int main(){
int arr[100]={0};
int size=0;
cout<<"enter size and array:"<<endl;
cin>>size;
cout<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
 duplicate(arr,size);
    return 0;
}
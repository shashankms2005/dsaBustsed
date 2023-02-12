#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x=0;
    
int arr[5]={0,1,2,0,1};
int len=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+len);
for(int i=0;i<5;i++){

cout<<arr[i]<<" ";


}   

   
    return 0;
}
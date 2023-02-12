#include<iostream>
using namespace std;
void swaping(int *arr,int size){
    
      swap(arr[1],arr[size-1]);//it only swap one we hwve to loop
     
    }
    


void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
  
}
int main(){
    int ar[10]={0,5,4,7,8,9,2,1,1};
  int a=0;
  int b=0;
 
    swaping(ar,9);
   
      printarr(ar,9);
    
        for(int i=0;i<9;i++){
        a=max(a,ar[i]);
      
    }
    cout<<endl<<a;
    
        for(int i=0;i<9;i++){
        b=min(b,ar[i]);
      
    }
    cout<<endl<<b;
  
 
return 0;
    
}
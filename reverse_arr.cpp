#include<iostream>
using namespace std;
void revAray(int arr[],int size){
    cout<<"array elements :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"reverse of array is:"<<endl;
    
    for(int i=(size-1);i>=0;i--){
       cout<<arr[i]<<endl;

     
    }

    

}
int main(){
int ar1[10]={0};
int size=0;
cout<<"enter size"<<endl;
cin>>size;
cout<<"enter elements"<<endl;
for(int i=0;i<size;i++){
    cin>>ar1[i];
}
revAray(ar1,size);


    return 0;
}
#include<iostream>
using namespace std;
double avg=0;
int sum=0;
int main(){
    int arr[100]={0};
    int size=0;
    cout<<"enter size and array:"<<endl;
    cin>>size;
    cout<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<size;i++){
 sum=sum+arr[i];
    }
    avg=sum/size;
    cout<<avg;
}
#include<iostream>
using namespace std;
int main(){
   /* int n;    BAD PRACTISE
    cin>>n;
    int arr[n];*/
   int n=0;
   cin>>n;
   cout<<endl;

//HEAP MEMORY ALLOCATION FOR ARRAY
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
   
//HEAP MEMORY ALLOCATION
   int *a=new int;
    *a=14;
    cout<<"address in heap memory: "<<a<<endl;
    cout<<"value of a(in heap memory)"<<*a<<endl;
  delete a;
  cout<<a<<endl;
  cout<<*a<<endl;// a gets deleted so garbage value will be present

    
    return 0;
}
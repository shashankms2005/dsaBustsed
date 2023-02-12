#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};

    cout<<"address of 1 st block: "<<arr<<endl;
     cout<<"address of 1 st block: "<<&arr[0]<<endl;
      cout<<"address of 1 st block: "<<&arr<<endl;
     cout<<"address of 2 nd block: "<<&arr[1]<<endl;
     cout<<endl;

     
     cout<<"value at 1st block: "<<*arr<<endl;
     cout<<"value at 1st block: "<<arr[0]<<endl;
     cout<<endl;

     //arr[i]=*(arr+i); OR i[arr]=*(i+arr)  BOTH ARE SAME  [*(&arr[0]+i)]
     cout<<"2nd index: "<<*(arr+2)<<endl;
     cout<<"3nd index: "<<*(arr+3)<<endl; 
     cout<<"updating 1st num: "<<(*arr)+3<<endl;
     cout<<"updating 2st num: "<<(*(&arr[1]))+3<<endl;
     cout<<"updating address: "<< arr+2<<endl;
     cout<<endl;

     int *p=arr;
     /*OR
     *p=&arr;
     OR
     *p=&arr[0];
     */

     cout<<"size of arr: "<<sizeof(arr)<<endl;
      cout<<"size of &arr: "<<sizeof(&arr)<<endl;
      cout<<"size of &arr[0]: "<<sizeof(&arr[0])<<endl;
      cout<<"size of pointer: "<<sizeof(p)<<endl;
     cout<<"size of pointer(&p): "<<sizeof(&p)<<endl;
      cout<<"size of value in pointer: "<<sizeof(*p)<<endl;
      cout<<&arr<<endl;
      cout<<&arr[0]<<endl;
      cout<<p<<endl;
      cout<<"pointer address: "<<&p<<endl;

      //mapping of system table is not possible
      //arr+=1; -> not possible error

      p+=1;//2 nd index address
      cout<<"updated address: "<<p<<endl;
      cout<<endl;

      char c[5]="abcd";
      char *ch=&c[0];
     cout<<"c: "<<c<<endl;
      cout<<"ch: "<<ch<<endl;
      ch+=1;
      cout<<"updating address of pointer ch: "<<ch<<endl;
   
          char c1='z';
      char *ch1=&c1;
     cout<<"c1: "<<c1<<endl;
      cout<<"ch1: "<<ch1<<endl;

    

      return 0;
}
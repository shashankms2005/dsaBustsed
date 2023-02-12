#include<iostream>
using namespace std;
int main(){
    int x=78;
    int *p=&x;

    char c='a';
    char *ch=&c;
  /*  (same)
  int *p=0;
  p=&x;
  */

 /* 
 bad practise of initialising pointer
 int*p; -> we are pointing pointer to some unknown memory loc(which might be read only)
 */

    cout<<"value of x: "<<x<<endl;
    cout<<"value of p: "<<p<<endl;
    cout<<"address of x: "<<&x<<endl;
    cout<<"value of *p: "<<*p<<endl;
    cout<<endl;

    //pointers size
    cout<<"size of pointer: "<<sizeof(ch)<<endl;
    cout<<"size of c: "<<sizeof(c)<<endl;
    cout<<endl;

    (*p)+=2;
    //(*p)+2; wrong syntax
    cout<<"value of updated x: "<<x<<endl;//*p+2 also same
    cout<<endl;

    //copying pointer to another pointer
    int *p2=p;
    cout<<"value of p2: "<<*p2<<endl;
    cout<<"address of p2: "<<p2<<endl;
    cout<<endl;

    //updating address
    p2+=1;
    cout<<"updated address: "<<endl;
    cout<<p2<<endl;//loc jumping not adding (+1 refers of jumping of 1 loc=4bytes)

        return 0;

}
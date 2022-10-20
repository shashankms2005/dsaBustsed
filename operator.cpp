#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=4;
    //arthimatic
    cout<<a+b<<endl;//9
     cout<<a-b<<endl;//1
      cout<<a%b<<endl; //1
      cout<<a/b<<endl; //1
      cout<<a*b<<endl;//20

      //relational
       cout<<(a==b)<<endl;//0
        cout<<(a>=b)<<endl;//1
         cout<<(a<=b)<<endl;//0
          cout<<(a!=b)<<endl;//1

        //logical
        bool c=true;
        bool d=false;

         cout<<(c&&d)<<endl;//0
          cout<<(c||d)<<endl; //1
           cout<<(!c)<<endl;  //0
      

      //assignment
      cout<<(a+=1)<<endl;//6
      cout<<(b-=2)<<endl;//2



      //bitwise operetor
      int e=0;
      cout<<(~e)<<endl;//youtube 
      cout<<"leftshift multiplies the num by 2^x  and symbol is << lefthand"<<endl;
      cout<<(14<<1)<<endl;//100100 or 28
      cout<<"rightshift divides the num by 2^x  and symbol is >> righthand"<<endl;
      cout<<(14>>1)<<endl;//1001 or 7
      cout<<(2|3)<<endl;//2=10  3=11  ans is 3
      cout<<(2&3)<<endl;//2


      //misclaneous oprators
      cout<<sizeof(a)<<endl;
      bool f;
      a==b?f=true:f=false;
      cout<<f;//0

      //unary operator
      int num1=1;
      int num2=3;
      cout<<(++num1)<<endl;//2
      cout<<(num2++)<<endl;//3
      cout<<(num1+num2)<<endl;//6









       return 0;
}
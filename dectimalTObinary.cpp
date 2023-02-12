#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
float i=0;
float ans=0;
int bit=0;
//here float is used because of compalier issues & becaues of pow
cin>>n;
while(n!=0){
     bit=n & 1;
    ans=(bit*pow(10,i))+ans;

    n=n>>1;
    i++;
}
cout<<ans<<endl;

      return 0;
} 
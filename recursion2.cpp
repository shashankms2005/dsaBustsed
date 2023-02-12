#include<iostream>
using namespace std;
void printTAILrecursion(int n){
    //base case
    if(n==0)
    return ;

    //processing
    cout<<n<<" ";

    //recursive relation
     printTAILrecursion(n-1);
}
void printHEADrecursion(int m){
    //base case
    if(m==0)
    return;

    //recursive relation
       printHEADrecursion(m-1);

    //processing
    cout<<m<<" ";
}
int main(){
    int n;
    int m;
    cout<<"enter two num: "<<endl;
    cin>>n;
    cin>>m;
    printTAILrecursion(n);
    cout<<endl;
     printHEADrecursion(m);
    return 0;
}
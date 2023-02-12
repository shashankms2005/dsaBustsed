#include<iostream>
using namespace std;
void update(int **p2){
    **p2+=1;

}
int main(){
    int x=10;
    int *p1=&x;
    int **p2=&p1;

cout<<x<<endl;
cout<<p1<<endl;
cout<<p2<<endl;
cout<<endl;

cout<<&x<<endl;
cout<<p1<<endl;
cout<<*p2<<endl;
cout<<endl;

cout<<x<<endl;
cout<<*p1<<endl;
cout<<**p2<<endl;
cout<<endl;

cout<<&p1<<endl;
cout<<p2<<endl;
cout<<endl;

cout<<x<<endl;
update(p2);
cout<<x;
    return 0;
}
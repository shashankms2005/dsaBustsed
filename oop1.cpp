#include <iostream>
#include "ohero.cpp" //filename.cpp(not class name)
#include "ooppadding.cpp"
using namespace std;
/*class hero{//class initialision
    int health;
    char level;
};*/
int main()
{
    hero h1;                                     //-> obj initialision ->class_name obj_name;
    cout << "size of h1:" << sizeof(h1) << endl; // size of empty class is 1(no properties) [padding/greedy allignment]
    cout << "the value of demo initialised in ohero.cpp file name:" << h1.demo << endl;
    h1.health = 70; // u can initialize this way(using dot(.) operator)
    cout << "before updating health:" << h1.health << endl;

    h1.sethealth(10);
    cout << "h1.health:" << h1.health << " or" << endl;
    cout << "h1.gethealth():" << h1.gethealth() << " same only." << endl;
    h1.setlevel('A');
    // cout<<"h1.level:"<<h1.level<<endl;  -> error because it is declared under private
    cout << "h1.getlevel():" << h1.getlevel() << endl;

    size s; // ooppadding
    cout << "size:" << sizeof(s);
    cout << endl;

    // dynamic allocation
    hero *h2 = new hero;
    h2->sethealth(20);
    h2->setlevel('B');
    cout << "displaying dynamic values:" << endl;
    cout << h2->gethealth() << "and"; // instead of . use ->
    cout << h2->getlevel() << endl;

    int n = 0;
    cout << endl;
    cout << "enter a value:" << endl;
    cin >> n;
    h2->sethealth(n);
    cout << "output by taking input from user: " << h2->gethealth() << endl;

    delete h2;
    return 0;
}
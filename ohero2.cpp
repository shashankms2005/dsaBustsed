#include <iostream>
using namespace std;
// line 1 and 2 are decleared because we are using cout here(in print()) its present in iostream
class hero2
{
private:
    int health;
    char level = '-'; // default value

public:
    // this->=property_of_class=property_of_main()
    // it is used when variable name of class and main() are same(to avoid confusion)
    sethealth(int health)
    {
        this->health = health;
    }
    setlevel(char level)
    {
        this->level = level;
    }
    gethealth()
    {
        return health;
    }
    getlevel()
    {
        return level;
    }
    printing()
    {
        cout << "address of this: " << this << endl;
        cout << "health: " << health << " ";
        cout << "level: " << level;
    }
    print()
    {
        /*  if using namespace std was not decleared-> /*  std::  */ cout << "health: " << health << " ";
        /*std::*/ cout << "level: " << level;
    }
    // u can have many constructor name same name(class name) but it should have diff parmeters list
    hero2() // default constructor
    {
        cout << "constructor called! " << endl;
    }
    hero2(int health)
    {
        this->health = health;
        // cout << "health:" << health << endl;
    }
    hero2(char level)
    {
        this->level = level;
        // cout << "level:" << level;
    }
    hero2(int health, char level)
    {
        this->level = level;
        this->health = health;
        // cout << "health:" << health << endl;
        // cout << "level:" << level << endl;
    }
    ~hero2()
    {
        cout << "destructor called" << endl;
    }

    static int time;
    // it is declared inside class but initialised outside class and above main()

    // static function return only static variables,no this pointer,no object creation
    static random() // here in all functions u can specify datatype  or leave blank(only in func which has no class(except const) name exx:print()+)
    {
        return time;
    }

    string name;
     hero2(string name)
        {
        this->name = name;
    }
};
int hero2 ::time = 99;

class hero
// class has variables(properties) and member functions.
{
public:
    int health; // u can initialize here only int health=100;
    int demo = 1000;

private:
    char level;

    // getler and setler used to use properties(data members) declared under private
    // getler and setler should be in public

    // getler and setler are only functions not keywords

public:
    // getler->get value [output] && setler->sets valuse [initialisation]
    // getXXX(); || setXXX(datatype var);   (after ger||set any name can be given)
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    int sethealth(int h)
    {
        health = h;
    }
    char setlevel(int ch)
    {
        level = ch;
    }
};
// the file name(hero.cpp) and the class name need to be same (its user wish)

// public:->can be used inside and outside function
// private:->can be used only inside function
#include <iostream>
#include "ohero2.cpp"
using namespace std;
int main()
{

     cout << "hi" << endl;
     cout << endl;
     hero2 a; // hero2 a == hero2 a();
     hero2 *f = new hero2;
     cout << endl;
     // hero a,b,c,d(78) -> also possible

     hero2 b(20);
     b.print(); // since in b no char level is sent so default is printed
     cout << endl;
     cout << endl;

     cout << "to prove that address of this and c are same as this is a pointer to the current object:" << endl;
     hero2 c(90, 'D');
     cout << "address of c : " << &c << endl;
     c.printing();
     cout << endl;
     cout << endl;

     hero2 cpy(c); // syntax for copy constructor (user defined) refer notes
     cpy.print();
     cout << endl
          << endl;

     // copy assignment operator
     hero2 d(100, 'E');
     hero2 e(75, 'U');
     d = e; // e value is copied to d(lhs <= rhs)
     d.print();
     cout << endl;
     e.print();
     cout << endl
          << endl;

     cout << "static variable:" << c.time << endl;
     cout << "calling static function: " << hero2::random() << endl
          << endl;

     const hero2 con("ms");
     cout << con.name << endl;
     //con.name = "sm";
     cout << con.name << endl
          << endl;
     // destructor automatically invoked when class ends
     // here we have 7 statically defined class so in output window 7 "destructor called " statements

     // but for f obj which is dynamically invoked its destructor is not automatically invoked
     // it is invoked manually
     delete f;
     // now we get 8 "destructor called " statements
     return 0;
}
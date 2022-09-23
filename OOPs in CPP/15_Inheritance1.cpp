/***************************************************************************
 *         INHERITANCE and its TYPES.
 *
 * Inheritance - In C++, inheritance is a process in which one object
 * acquires all the properties and behaviors of its parent object
 * automatically. In such way, you can reuse, extend or modify the
 * attributes and behaviors which are defined in other class.
 *
 * In C++, the class which inherits the members of another class is 
 * called derived class and the class whose members are inherited is 
 * called base class. The derived class is the specialized class for 
 * the base class.
 * 
 * 
 * 
 ***************************************************************************/

#include<iostream>
using namespace std;

class Parent{
    public:
        int x;    
};

class Child : public Parent{
    public:
        int y;
};

class Base{
    private:
    int a = 10;
    protected:
    int b = 20;
    public:
    int c = 30;
};


/***********************************************************************
 * Modes of Inheritance
 ***********************************************************************/
class Child1 : private Base
{ // b is private
  // c is private
  // a is inaccessible Child1
};
class Child2 : protected Base
{ // b is protected
  // c is protected
  // a is inaccessible Child2
};
class Child3 : public Base
{ // b is protected
  // c is public
  // a is inaccessible Child3
};

int main(){
    Child c;
    Child1 c1;
    Child2 c2;
    Child3 c3;
    c.x = 10;
    c.y = 90;
    cout<<c.x<<"\t"<<c.y<<endl;
    cout << c1.a;
    cout << c1.b;
    cout << c1.c;
    cout << c2.a;
    cout << c2.b;
    cout << c2.c;
    cout << c3.a;
    cout << c3.b;
    cout << c3.c;
    return 0;
}
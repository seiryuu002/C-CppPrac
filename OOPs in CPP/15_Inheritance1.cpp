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
    int a;
    protected:
    int b;
    public:
    int c;
};

class Child1 : private Base
{
};
class Child2 : protected Base
{
};
class Child3 : public Base
{
};

int main(){
    Child c;
    c.x = 10;
    c.y = 90;
    cout<<c.x<<"\t"<<c.y<<endl; 
}
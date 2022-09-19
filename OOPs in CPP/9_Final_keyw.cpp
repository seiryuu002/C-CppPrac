#include<iostream>
using namespace std;

class Base
{
public:
    virtual void myfun() final      // non - virtual word can't be declared as final.
    {
        cout << "myfun() in Base";
    }
};
class Derived : public Base
{ // Sometimes you don’t want to allow derived class to override the base class 
  // virtual function. C++ 11 allows built-in facility to prevent overriding of 
  //virtual function using final specifier.
    void myfun()
    {
        cout << "myfun() in Derived\n";
    }
};

// 2nd use of final specifier : final specifier in C++ 11 can also be used 
// to prevent inheritance of class / struct.If a class or struct is marked 
// as final then it becomes non inheritable and it cannot be used as base 
// class / struct.

class Parent final{
    public:
    int x;
};

class Child : public Parent // a 'final' class type cannot be used as a base class
{ 
    int y;
};

void test(){
    int final = 20;   // final is not a keyword and can be used as an identifier 
    cout << final;
}

int main()                                                                                                                                                                                                                 main()
{
    Derived d;
    Base &b = d;
    b.myfun();
    return 0;
}
/**************************************************************************
 *                          Destructors in OOPs
 * 
 * A destructor works opposite to constructor. it destructs the objects of
 * classes. It  can  be  defined  only  once in a class. Like constructors,
 * it is invoked automatically.
 * 
 * A  destructor  is  defined  like constructor. It must have same name as
 * class. But it is prefixed with a tilde sign (~).
 * It is called automatically at the end of program.
 *
 * Note: C++     destructor     cannot    have    parameters.     
 *       Moreover, modifiers can't be applied on destructors.
 * 
 **************************************************************************/
#include<iostream>
using namespace std;
class Example{
    public:
    int n;
    Example(){
        cout<<"Constructor invoked"<<endl;
    }
    private:
    ~Example(){                             // Private destructor
        cout<<"Destructor invoked"<<endl;
    }
    public:
    friend void destructExample(Example* ptr);
};

void destructExample( Example* ptr){
    delete ptr;
}


int main(){
    // Example x;               // local variable 'x' can't be destructed because
                                // destructor is private.
    Example* e;                 // works fine because there is no object being 
                                // constructed, just a pointer of type 'Example*'
                                // so nothing is destroyed.
    Example* E = new Example;   // This works too because of DMA(dynamic memory allocation),
                                // it is programmer's responsibility to delete it.  
    // delete E;                // when we call delete destructor is called but,
                                // destructor is private that's why compilation error.
    destructExample(E);         // this is a way to create classes with private 
                                // destructors and have a function as a friend of the
                                // class. the function can only delete the objects.
    return 0;         
}
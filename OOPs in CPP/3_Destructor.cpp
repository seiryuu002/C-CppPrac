/**************************************************************************
 *                          Destructors in OOPs
 * A destructor works opposite to constructor. it destructs the objects of
 * classes. It  can  be  defined  only  once in a class. Like constructors,
 * it is invoked automatically.
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
    ~Example(){
        cout<<"Destructor invoked"<<endl;
    }
};
int main(){
    Example x;
    return 0;
}
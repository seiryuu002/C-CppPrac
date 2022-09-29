/*********************************************************************************
 * Polymorphism -> The word “polymorphism” means having many forms.
 * In simple words, we can define polymorphism as the ability of a message
 * to be displayed in more than one form. A real-life example of polymorphism
 * is a person who at the same time can have different characteristics.
 * A man at the same time is a father, a husband, and an employee. So the
 * same person exhibits different behavior in different situations. This is
 * called polymorphism. Polymorphism is considered one of the important
 * features of Object-Oriented Programming.
 *
 * Types of Polymorphism
 * * Compile-time Polymorphism.
 * * Runtime Polymorphism.
 *
 * Compile Time Polymorphism - This type of polymorphism is achieved by 
 *                             function overloading or operator overloading.
 *********************************************************************************/
#include<iostream>
using namespace std;

/* FUNCTION OVERLOADING - When there are multiple functions with the same 
   name but different parameters, then the functions are said to be 
   overloaded, hence this is known as Function Overloading. Functions can 
   be overloaded by changing the number of arguments or/and changing the 
   type of arguments.
*/
class Poly{
    public:

    void func(int x){                         // Func is an overloaded function
        cout<<"Value of x is "<<x<<endl;
    }

    void func(double x){
        cout<<"value of x is "<<x<<endl;
    }

    void func(int x, int y){
        cout<<"Value of x and y is "<<x<<", "<<y<<endl;
    }
};


int main(){
    Poly p;
    p.func(1);              // Function Overloading
    p.func(1.7326);
    p.func(10, 5);
    return 0;
}
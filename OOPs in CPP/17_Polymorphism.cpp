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

/* Operator Overloading - C++ has the ability to provide the operators 
   with a special meaning for a data type, this ability is known as 
   operator overloading. For example, we can make use of the addition 
   operator (+) for string class to concatenate two strings. We know 
   that the task of this operator is to add two operands. So a single 
   operator ‘+’, when placed between integer operands, adds them and 
   when placed between string operands, concatenates them.

*/

class Complex{
    private:
        int real;
        int image;
    
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            image = i;
        }

        Complex operator+(Complex const& obj){
            Complex o;
            o.real = real + obj.image;
            o.image = image + obj.image;
            return o;
        }

        void print(){
            cout<<real<<" + i"<<image<<endl;
        }
};


int main(){
    Poly p;
    Complex C1(10, 5), C2(2, 4);
    p.func(1);              // Function Overloading
    p.func(1.7326);
    p.func(10, 5);
    Complex C3 = C1 + C2;
    C3.print();
    return 0;
}
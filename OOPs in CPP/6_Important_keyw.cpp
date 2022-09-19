/*********************************************************
 * STATIC KEYWORD-
 * Static variables have a property of preserving their 
 * value even after they are out of their scope! Hence, 
 * static variables preserve their previous value in 
 * their previous scope and are not initialized again in
 * the new scope.
 * 
 * 
 *********************************************************/
#include<iostream>
using namespace std;

void demo(){
    /* 
    when a variable is declared as static, space for it gets allocated 
    for the lifetime of program.Even if the function is called multiple 
    times, space for the static variable is allocated only once and the 
    value of variable in the previous call gets carried through the next 
    function call. This is useful for implementing coroutines in C/C++ 
    or any other application where previous state of function needs to 
    be stored.*/
    
    static int count = 0;         //static variable in a function
    cout<<count<<" "<<endl;
    count++;

}
    /*
    Static variables in a class: As the variables declared as static are 
    initialized only once as they are allocated space in separate static 
    storage so, the static variables in a class are shared by the objects. 
    There can not be multiple copies of same static variables for different 
    objects. Also because of this reason static variables can not be 
    initialized using constructors.*/

class Example{
    public:
    static int i;
    Example(){};
};
class A{
    int i = 0;
    public:
        A()
        {
            i = 0;
            cout<<"Inside Constructor\n";
        }
        ~A()
        {
            cout<<"Inside Destructor\n";
        }
        static void fun()
        {
            cout<<"static function invoked";
        }
};

int Example::i = 1;

int main(){
    for(int i = 0; i<5; i++){
        demo();
    }
    Example e1;
    // Example e2;
    /*You can see in the above program that we have tried to create multiple 
      copies of the static variable i for multiple objects. But this didn’t 
      happen. So, a static variable inside a class should be initialized 
      explicitly by the user using the class name and scope resolution operator 
      outside the class as shown below:
    */
    cout<<e1.i<<endl;
    /*Class objects as static: Just like variables, objects also when declared 
      as static have a scope till the lifetime of program.Consider the below 
      program where the object is non-static.*/
    int x = 0;
    if(x == 0){
        //A a;            // Non-static - scope of object is just inside the if block.
        /*Output for above will be:
          Inside Constructor  
          Inside Destructor
          End of main
        */
        static A a;               
    }
    /*
    Static functions in a class: Just like the static data members or static 
    variables inside the class, static member functions also does not depend 
    on object of class. We are allowed to invoke a static member function using 
    the object and the ‘.’ operator but it is recommended to invoke the static 
    members using the class name and the scope resolution operator. Static member
    functions are allowed to access only the static data members or other static
    member functions, they can not access the non-static data members or member
    functions of the class.*/

    cout<<"End of main\n";
    return 0;
}
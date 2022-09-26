/**************************************************************************
 * ENCAPSULATION - In normal terms Encapsulation is defined as wrapping up
 * of data and information under a single unit. In Object Oriented Programming,
 * Encapsulation is defined as binding together the data and the functions
 * that manipulates them.
 *
 * Example: Consider a real life example of encapsulation, in a company 
 * there are different sections like the accounts section, finance section, 
 * sales section etc. The finance section handles all the financial 
 * transactions and keep records of all the data related to finance. 
 * Similarly the sales section handles all the sales related activities 
 * and keep records of all the sales.
 *
 **************************************************************************/
#include<iostream>
using namespace std;

class Encapsultion{
    private:
        int x;
    public:
        void set(int a){
            x = a;
        }
        int get(){
            return x;
        } 
};

int main(){
    Encapsultion obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}
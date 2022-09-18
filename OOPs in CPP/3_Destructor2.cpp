/*************************************************************************
 * 
 *                            VIRTUAL DESTRUCTOR 
 * 
 *************************************************************************/
/*************************************************************************
* Deleting a derived class object using a pointer of base class type that
* has a non-virtual destructor results in undefined behavior. To correct 
* this situation, the base class should be defined with a virtual destructor.
**************************************************************************/
#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout << "Constructing base\n";
    }
    // ~base()                              // results in undefined behaviour
    // {
    //     cout << "Destructing base\n";
    // }
    virtual ~base()                         // virtual destructor
    {
        cout << "Destructing base\n";
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Constructing derived\n";
    }
    // ~derived()                          
    // {
    //     cout << "Destructing derived\n";
    // }
    
    virtual ~derived()                     // Virtual Destructor
    {
        cout << "Destructing derived\n";
    }
};

int main()
{
    derived *d = new derived();
    base *b = d;
    delete b;
    getchar();
    return 0;
}
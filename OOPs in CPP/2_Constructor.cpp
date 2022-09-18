/**************************************************************************
 *                             CONSTRUCTORS in OOPs
 * In C++, constructor is a special method which is invoked automatically
 * at  the  time  of  object  creation. It is used to initialize the data
 * members  of  new object generally. The constructor in C++ has the same
 * name as class or structure.
 *
 * There are three types 1.Default, 2.Parameterized, 3.Copy
 * 1.Default:       A constructor which has no argument is known as default
 *                  constructor.  It  is  invoked  at  the time of creating
 *                  object.
 *
 * 2.Parameterized: A  constructor  which  has  parameters is called 
 *                  parameterized constructor. It is used to provide
 *                  different values to distinct objects.
 *
 * 3.Copy:          A copy constructor is a member function that initializes
 *                  an object using another object of the same class.
 **************************************************************************/
#include<iostream>
#include<string>
using namespace std;

class Student{
    public: 
    int a;
    int b;
    Student(){                                      // Default Constructor
        cout<<"Default constructor invoked"<<endl;
        a = 10;
        b = 20;
    }
    Student(int n1,int n2){                         // Parameterized Constructor
        a = n1;
        b = n2;
    }
    Student(const Student &t){                      //Copy Constructor.
        a = t.a;
    }
};

// int main(){
//     Student S;
//     cout<<"a: "<<S.a<<"\t"<<"b: "<<S.b<<endl;
//     Student S2(5, 10);
//     cout<<"\n"<<S2.a<<"\t"<<S2.b<<endl;
//     return 0;
// }

// Copy Constructor
// IMPLICIT COPY CONSTRUCTOR
class Sample
{
    int id;

public:
    void init(int x)
    {
        id = x;
    }
    void display()
    {
        cout << endl
             << "ID=" << id;
    }
};

int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();

    Sample obj2(obj1); // or obj2=obj1;
    obj2.display();
    return 0;
}

//EXPLICIT COPY CONSTRUCTOR
// class Sample
// {
//     int id;

// public:
//     void init(int x)
//     {
//         id = x;
//     }
//     Sample() {} // default constructor with empty body

//     Sample(Sample &t) // copy constructor
//     {
//         id = t.id;
//     }
//     void display()
//     {
//         cout << endl
//              << "ID=" << id;
//     }
// };
// int main()
// {
//     Sample obj1;
//     obj1.init(10);
//     obj1.display();

//     Sample obj2(obj1); // or obj2=obj1;    copy constructor called
//     obj2.display();
//     return 0;
// }
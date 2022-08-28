/**************************************************************************
 *                             CONSTRUCTORS in OOPs
 * In C++, constructor is a special method which is invoked automatically 
 * at  the  time  of  object  creation. It is used to initialize the data 
 * members  of  new object generally. The constructor in C++ has the same 
 * name as class or structure.
 * 
 * There are two types 1.Default, 2.Parameterized
 * 1.   Default:    A constructor which has no argument is known as default
 *                  constructor.  It  is  invoked  at  the time of creating
 *                  object.
 *
 * 2.Parameterized: A  constructor  which  has  parameters is called
 *                  parameterized constructor. It is used to provide
 *                  different values to distinct objects.
 **************************************************************************/
#include<iostream>
#include<string>
using namespace std;

class Student{
    public: 
    int Id;
    string Name;
    Student(){                                    // Default Constructor
        cout<<"Default constructor invoked"<<endl;
    }
    Student(int id, string name){ 
        Id = id;
        Name = name;
    }
};

int main(){
    Student S;
    Student S2 = Student(1, "a");
    cout<<"\n"<<S2.Id<<"\t"<<S2.Name<<endl;
    return 0;
}



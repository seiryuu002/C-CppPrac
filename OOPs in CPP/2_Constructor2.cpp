/*************************************************************************
* Shallow Copy Vs Deep Copy
*
**************************************************************************/
#include<iostream>
#include<cstring>
using namespace std;

//Copy elision
class Sample{
    public:
    void display()
    {
        cout<<"hello Dear!";        
    }
};
class String
{
private:
    char *s;
    int size;

public:
    String(const char *str = NULL); // constructor
    ~String() { delete[] s; }       // destructor
    String(const String &);         // copy constructor
    void print()
    {
        cout << s << endl;
    }                          // Function to print string
    void change(const char *); // Function to change
};

// In this the pointer returns the CHAR ARRAY
// in the same sequence of string object but
// with an additional null pointer '\0'
String::String(const char *str)
{
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

void String::change(const char *str)
{
    delete[] s;
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

String::String(const String &old_str)
{
    size = old_str.size;
    s = new char[size + 1];
    strcpy(s, old_str.s);
}

int shallowCopy()
{
    String str1("GeeksQuiz");
    String str2 = str1;

    str1.print(); // what is printed ?
    str2.print();

    str2.change("GeeksforGeeks");

    str1.print(); // what is printed now ?
    str2.print();
    return 0;
}


int deepCopy()
{
    String str1("GeeksQuiz");
    String str2 = str1;

    str1.print(); // what is printed ?
    str2.print();

    str2.change("GeeksforGeeks");

    str1.print(); // what is printed now ?
    str2.print();
    return 0;
}


void copyElision(){

    for(int i = 0; i <= 2; i++ ){   // This can print maybe 1,2 or 3
        Sample S;
        S.display();                // times depending on whether compiler
        cout<<endl;                 // performs RVO (Return Value Optimization)
    }
}


int main(){
    shallowCopy();
    //copyElision();
}
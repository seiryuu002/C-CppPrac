#include <iostream>
using namespace std;
int main()
{ int *p, *a;
    p = new int;         // dynamic memory allocation for int
    a = new int[20];     // dynamic memory allocation for array
    *p = 20;
    cout<<*p<<"\n";
    delete p;
    delete[] a;
    cout<<*p;
    return 0;
}
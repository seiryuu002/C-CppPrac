#include<stdio.h>

void value(int a){       // Call by value
    a = a + 1;
}

void Reference(int *a){  //call by reference
    *a = *a + 1;
}

void main(){
    int x = 5, y = 10;
    value(x);
    value(y);
    printf("x = %d\n", x);  // values dont change
    printf("y = %d\n", y);
    Reference(&x);
    Reference(&y);
    printf("x = %d\n", x);  // values change
    printf("y = %d\n", y);
}
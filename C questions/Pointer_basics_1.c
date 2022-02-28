#include<stdio.h>

int main(){
    int a;
    int *p;
    a = 5;
    p = &a;

    printf(" printing 'a': %d\n ", a);             // prints value of a
    printf(" printing 'p': %d\n ", p);             // prints value of p i.e, address of variable a
    printf(" printing '&a': %d\n ", &a);           // prints address of a
    printf(" printing '&p': %d\n ", &p);           // prints address of p
    printf(" printing '*p': %d\n ", *p);           // prints value at address stored as value of p...also known as dereferencing
}

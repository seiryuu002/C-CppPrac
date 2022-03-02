// function pointers and callbacks
#include<stdio.h>
 
int Add(int a, int b){
    return a + b;
}

void A(){
    printf("call-back function is called...!\n");
}

int B(void (*ptr)()){ // pointer to function as argument
    printf("function with pointer to call-back function is called\n");
    ptr();
}

int main(){
    int a = 4, b = 8;
    int (*p)(int, int);         // pointer to function that takes (int, int) as parameter and return int
    p = Add;                    // equivalent to p = &Add;
    int sum = p(a,b);           // equivalent to sum = (*p)(a, b);
    printf("Sum = %d\n", sum);
    B(A);                       // equivalent to void (*p)() = A; B(p);
}                               // becase name of function returns a pointer to the same function
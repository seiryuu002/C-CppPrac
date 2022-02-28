#include <stdio.h>

int main(){
    int a = 5, b;
    int *p; 
    p = &a;
    printf("\naddress of p is: %d\n", p);
    printf("value at address stored in p is: %d\n", *p);
    printf("address of p+1 is: %d\n", p+1);
    printf("value at address stored in p+1 is: %d\n", *(p + 1));
}
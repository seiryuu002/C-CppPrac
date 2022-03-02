#include<stdio.h>
#include<stdlib.h>
int add(int a, int b)
{   int c = a+b;
    return c;
}
int main()
{   int a = 5, b = 10;
    int sum = add(a,b);
    printf("sum = %d ", sum);
}
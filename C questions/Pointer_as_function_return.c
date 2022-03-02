#include<stdio.h>
#include<stdlib.h>
/*  int* add(int *a, int *b)                                        // pointer to integers
    {   //printf("Address of a in add = %d\n", &a);
        //printf("value in a of add = %d\n", a);
        //printf("Value at adress stored in a of add = %d\n", *a);
        int c = (*a) + (*b);
        return &c;                      // it will throw an error because it returns address of a local variable
    }
    int main()
    {   int a = 5, b = 10;
        //printf("Address of a in main = %d\n", &a);
        int *sum = add(&a,&b);
        printf("sum = %d\n ", *sum);
    }
*/

int* add(int* a, int* b)
{
    int* c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main()
{
    int a = 5, b = 6;
    int *sum = add(&a, &b);
    printf("sum = %d", *sum);
    return 0;
}
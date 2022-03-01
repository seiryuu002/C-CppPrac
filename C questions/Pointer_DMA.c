#include<stdio.h>
#include<stdlib.h>

void main(){
    int *p, *a;
    p = (int*)malloc(sizeof(int));
    a = (int*)malloc(20*sizeof(int));
    *p = 10;
    *a = 1;
    *(a+1) = 2;
    printf("\n%d %d %d\n", *p, *a, *(a+1));
    free(p);
    printf("\n%d %d %d\n", *p, *a, *(a + 1));
}
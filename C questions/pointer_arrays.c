#include <stdio.h>

void main(){
    int a[] = {2, 4, 5, 6, 9};
    int i;
    for(i = 0 ; i < 5 ; i++ )
    {
        printf("Address of '&a[%d]' = %d\n", i, &a[i]);
        printf("Address of  'a+%d'  = %d\n", i, a + i);
        printf("value  of  'a[%d]'  = %d\n", i, a[i]);
        printf("value of '*(a+%d)'  = %d\n", i, *(a + i));
    } 
}
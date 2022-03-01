#include<stdio.h>
#include<stdlib.h>
int using_malloc()
{
    int n;
    
    printf("Enter size of array\n");
    scanf("%d", &n);
    
    printf("Dynamic memory allocation using malloc funtion\n\n");
    
    int *a = (int*)malloc(n*sizeof(int));  // Dynamically allocated array
    
    printf("Printing array after allocating dynamic memory\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    for(int i = 0; i<n ; i++){
        a[i] = i + 1;
    }
    
    printf("Printing array after allocating dynamic memory and entering value\n\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    
    free(a);
    a[1] = 9;
    
    printf("Printing array again after freeing dynamic memory\n\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    return 0;
}

int using_calloc()
{
    int n;

    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Dynamic memory allocation using calloc funtion\n\n");

    int *b = (int *)calloc(n, sizeof(int));                   // Dynamically allocated array all values are initialized 0 after allocation

    printf("Printing array after allocating dynamic memory\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        b[i] = i + 1;
    }

    printf("Printing array after allocating dynamic memory and entering value\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n\n");

    free(b);

    printf("Printing array again after freeing dynamic memory\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n\n");
    return 0;
}

int using_realloc()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Dynamic memory re-allocation using realloc funtion\n\n");
    int *c = (int*)malloc(n*sizeof(int));  // dynamically allocated array
    for(int i = 0; i < n; i++)
    {
        c[i] = i+1;
    }
    int *d = (int*)realloc(c, 2*n*sizeof(int));         // re-allocates 2*n size of block to d
    //int *d = (int *)realloc(c, 0);                    // equivalent to free(c)
    //int *d = (int *)realloc(NULL, n*sizeof(int));     // equivalent to malloc()
    printf("prev address block = %d, new address block = %d\n", c, d);
    for (int i = 0; i < 2*n; i++)
    {
        printf("%d\n", d[i]);
    }
}
int main(){
    //using_malloc();
    //using_calloc();
    using_realloc();

}
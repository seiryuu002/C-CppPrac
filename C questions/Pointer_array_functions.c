// arrays as function parameters
#include<stdio.h>
void Double(int a[], int size){             // int* a is same as int a[]
                                            // when array is passed as an
    for (int i = 0; i < size; i++){         // argument to a function only               
        a[i] = 2*a[i];                      // address of first element is
    }                                       // passed so when using array 
}                                           // it is always call by reference                     
                                            // and never call by value

void main(){
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);
    Double(a, size);
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
}

// pointer types and pointer type casting

#include<stdio.h>

void main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("\nsize of integer is: %d ",sizeof(int));
    printf("\nAddress = %d, Value = %d ", p, *p);
    printf("\nAddress = %d, Value = %d ", p+1, *(p+1));
    char *ch;
    ch = (char*)p;
    printf("\nsize of character is: %d ", sizeof(char));
    printf("\nAddress = %d, Value = %d ", ch, *ch);
    printf("\nAddress = %d, Value = %d ", ch + 1, *(ch + 1));
    // 1025 = 00000000 00000000 00000100 00000001
    /*          203       202     201       200     --> address for each byte for a
       char pointer looks only for one byte as compared ton integer pointer which
       looks for 4 contiguous bytes because of the size difference between char
       and int.
       this is why output for above exmaple is:
       
       size of integer is: 4
       Address = 6422292, Value = 1025           (address changes every time program runs)
       Address = 6422296, Value = 3477504
       size of character is: 1
       Address = 6422292, Value = 1
       Address = 6422293, Value = 4
    */
    void *p1;                          // void pointer -- Generic pointer
    p1 = p;
    printf("\nAddress = %d", p1);
}
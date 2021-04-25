#include<stdio.h>
void main()
{ int i = 0, n,a = 1;
  printf("Enter the number of terms of The series 1, 2, 4, 7, 11, 16 you want to print :");
  scanf("%d",&n);
  printf("The series till %d terms is ",n);
  for(i = 1 ; i <= n ; i++)
  { printf("%d, ",a);
    a += i;
  }
 }

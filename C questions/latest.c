#include<stdio.h>
void main()
{int n = 0,i = 0, j = 1;
 printf("Enter any number of your choice :");
 scanf("%d",&n);
 printf("Numbers divisible by 3 are : ");
 for(i = 1; i <= n; i++)
 {if(i%3==0)
  printf("%d ",i);
 }
 printf("\nNumbers divisible by 5 are : ");
 for(i = 1; i <= n; i++)
 {if(i%5==0)
  printf("%d ",i);
 }
 printf("\nNumbers divisible by 7 are : ");
 for(i = 1; i <= n; i++)
 {if(i%7==0)
  printf("%d ",i);
 }
}

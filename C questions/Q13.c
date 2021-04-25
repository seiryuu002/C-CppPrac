#include <stdio.h>
int table(int n,int x)
{int i;
for(i = 1; i <= x; i++)
 {printf("%d x %d = %d",n,i,n*i);
  printf("\n");
 }
}
void main()
{int number,number2;
  printf("Enter any integer who's table you want to print:");
  scanf("%d",&number);
  printf("Enter til which number you want to print table:");
  scanf("%d",&number2);
  printf("Desired output is...\n");
  table(number,number2);
}

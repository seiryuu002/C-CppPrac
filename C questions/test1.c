#include<stdio.h>
void main()
{ int x = 7531;
  int y = 0;
  while(x!=0)
  {
    y = (y*10)+(x%10);
    x = x/10;
   }
printf("y = %d",y);
}

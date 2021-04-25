#include<stdio.h>
void main()
 {int number = 0,digits = 0;
  int result[100],i,n = 0;
  printf("enter any number of your choice : ");
  scanf("%d",&number);
  digits = number;
  while(digits != 0 )
  {digits = digits/10;
    n++;
  }
  for(i = n-1; i >= 0 ; i--)
  {if(number > 10)
    {result[i] = number%10;
    number = number/10;}
   else
    result[i] = number;
  }
  printf("Result for your given number is ");
  for(i = 0; i < n ; i++)
  { if(result[i] != 9)
    result[i] = result[i] + 1;
    else
    result[i] = 0;
    printf("%d",result[i]);
  }
 }

#include<stdio.h>
void main()
{int years = 0, months = 0, total_rainfall = 0, avg_rainfall = 0;
 int inches_rainfall = 0;
 int i,j;
 printf("Enter the number of years for which average rainfall is to be calculated : ");
 scanf("%d",&years);
 for(i = 1 ; i <= years ; i++)
 {for(j = 1 ; j <= 12 ; j++)
  {printf("Enter the inches of rainfall for month %d of year %d : ",j,i);
   scanf("%d",&inches_rainfall);
   total_rainfall = total_rainfall + inches_rainfall;
  }
 }
 months = years*12;
 avg_rainfall = total_rainfall/months;
 printf("\nAs per the details entered calculated data is given below \n");
 printf("\nTotal number of months : %d\n",months);
 printf("\nTotal inches of rainfall : %d\n",total_rainfall);
 printf("\nAverage inches of rainfall per month : %d\n",avg_rainfall);
}

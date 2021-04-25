#include<stdio.h>
void main()
{ int rainfall[12],monthsl[12],monthsu[12];
  int avg_rainfall = 0,total_rainfall = 0,i;
  int maxrain = 0,minrain = 0,flag1 = 0,flag2 = 0;
  for(i = 0; i < 12 ; i++)
 {printf("Enter the inches of rainfall for month %d : ",i+1);
  scanf("%d",&rainfall[i]);
  total_rainfall = total_rainfall + rainfall[i];
 }
 printf("\nAs per given data here are the statistics of rainfall...\n",total_rainfall);
 printf("Total inches of rainfall in the year : %d\n",total_rainfall);
 avg_rainfall = total_rainfall/12;
 printf("average inches of rainfall per month : %d\n",avg_rainfall);
 for(i = 0 ; i < 12; i++)
 {
  monthsu[i] = 0;
 }
 for(i = 0 ; i < 12; i++)
 {
  monthsl[i] = 0;
 }
 for(i = 1 ; i < 12; i++)
 {if(rainfall[maxrain] < rainfall[i])
   maxrain = i;
 }
 for(i = 1 ; i < 12; i++)
 {if(rainfall[minrain] > rainfall[i])
   minrain = i;
 }
 for(i = 0 ; i < 12; i++)
 {if(rainfall[maxrain] == rainfall[i] && maxrain != i)
  {monthsu[i] = i + 1;
  monthsu[maxrain] = maxrain + 1;
  flag1 = 1;}
 }
 for(i = 0 ; i < 12; i++)
 {
  if(rainfall[minrain] == rainfall[i] && minrain != i)
  {monthsl[i] = i + 1;
  monthsl[minrain] = minrain + 1;
  flag2 = 1;}
 }
 if(flag1 == 1)
 {printf("Months with highest rainfall are Month ");
  for(i = 0 ; i < 12; i++)
  {if(monthsu[i] != 0)
   printf("%d, ",monthsu[i]);
  }printf("\n");
 }else
  printf("Month with highest rainfall : Month %d\n",maxrain);
  if(flag2 == 1)
 {printf("Months with lowest rainfall are Month ");
  for(i = 0 ; i < 12; i++)
  {if(monthsl[i] != 0)
  printf("%d, ",monthsl[i]);
  }printf("\n");
  }
  else
  printf("Month with lowest rainfall : Month %d\n",minrain);
}

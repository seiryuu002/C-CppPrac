#include<stdio.h>
int mani(){
int a[10];
int b[10];
int result[20];
int i,temp,j,k,flag = 0;
printf("Enter elements of array a : ");
for(i = 0; i < 10; i++)
scanf("%d",&a[i]);
for(i = 0; i < 10; i++)
{for(j = 1+i; j < 10; j++)
{if(a[j] < a[i])
 {temp = a[i];
 a[i] = a[j];
 a[j] = temp;}
 else
 if(a[j] = a[i])
 k = 0;
}
}
printf("Enter elements of array b : ");
for(i = 0; i < 10; i++)
scanf("%d",&b[i]);
for(i = 0; i < 10; i++)
{for(j = 1+i; j < 10; j++)
{if(a[j] < a[i])
 {temp = a[i];
 a[i] = a[j];
 a[j] = temp;}
}
}
for(i = 0; i < 20; i++)
{if(i<10)
  result[i] = a[i];
 else
  result[i] = b[i];
}
for(i = 0; i < 10; i++)
{if(result[i] == result[i+10])
 flag++;
}
if(k = 0)
return 0;
else
if(flag !=10)
return 0;
else
return 1;
}

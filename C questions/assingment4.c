#include<stdio.h>
#include<string.h>
void main()
{char colour1[20],colour2[20];
printf("Enter first primary colour of your choice :\n");
scanf("%s",colour1);
strlwr(colour1);
if(strcmp(colour1,"red")==0 || strcmp(colour1,"blue")==0 || strcmp(colour1,"yellow")==0)
{printf("Enter second primary colour of your choice : \n");
 scanf("%s",colour2);
 strlwr(colour2);
if(strcmp(colour2,colour1)!=0)
{if(strcmp(colour2,"red")==0 || strcmp(colour2,"blue")==0 || strcmp(colour2,"yellow")==0)
 {if(strcmp(colour1,"red")==0)
  {if(strcmp(colour2,"blue")==0)
   printf("mixed colour is purple.");
  else
   printf("mixed colour is orange.");
  }else
 if(strcmp(colour1,"blue")==0)
  {if(strcmp(colour2,"red")==0)
   printf("mixed colour is purple.");
  else
   printf("mixed colour is green.");
  }else
 if(strcmp(colour1,"yellow")==0)
  {if(strcmp(colour2,"blue")==0)
   printf("mixed colour is green.");
  else
   printf("mixed colour is orange.");
  }
 }else
 printf("Enter any valid colour...");
 }else
 printf("Don't enter same colour twice.");
 }else
 printf("Enter any valid colour...");
 }

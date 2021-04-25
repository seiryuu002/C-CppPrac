#include<stdio.h>
#include<string.h>
void main(){
int age;
char gender[10];
char livesin[20];
char health[20];
printf("Please enter your age :\n");
scanf("%d",&age);
printf("Please enter your gender :\n");
scanf("%s",gender);
printf("Please enter whether you live in a city or village :\n");
scanf("%s",livesin);
printf("Please enter whether your health condition is \"excellent\" or \"poor\" :\n");
scanf("%s",health);
strlwr(gender);
strlwr(livesin);
strlwr(health);
if( age > 25 && age < 35)
{if(strcmp(livesin,"city")==0)
{if(strcmp(health,"excellent")==0)
{if(strcmp(gender,"male")==0)
{printf("According to the details entered insurance is available for you.\n");
 printf("your premium rate is Rs 4 per thousand with maximum policy amount of Rs 2 lakhs.");
}else
 if(strcmp(gender,"female")==0)
{printf("According to the details entered insurance is available for you.\n");
 printf("your premium rate is Rs 3 per thousand with maximum policy amount of Rs 1 lakh.");
}else
 printf("premium policy is not for \"Other\" category.\n");
}
else
if(strcmp(health,"poor")==0)
{printf("Even though you live in city you have poor health?\nhah!! truly you are a peasant!!\n");
 printf("According to the details entered insurance is available for you peasant.\nwho knows you may die tomorrow!!");}
else
 printf("Atleast enter a valid response peasant.");
}
else
if(strcmp(livesin,"village")==0)
{if(strcmp(health,"excellent")==0)
{printf("Don't lie you are a villager and you are supposed to have poor health \n");
 printf("now if you beg and say you are peasant with poor health we may give you a insurance ");
 printf("\notherwise forget it that a lowlife like you can even get a premium policy."); }
else
if( strcmp(health,"poor")==0)
{printf("According to the details entered insurance is available for you.\n");
 printf("your premium rate is Rs 6 per thousand with maximum policy amount of Rs 10,000.");}
else
 printf("Atleast enter a valid response peasant.");
}
else
 printf("Atleast enter a valid response peasant.");
}
else
 printf("According to the details entered insurance is not available for you peasant.\n");
}

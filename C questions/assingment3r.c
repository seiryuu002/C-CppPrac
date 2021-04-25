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
if( age > 25 && age < 35 && strcmp(livesin,"city")==0 && strcmp(health,"excellent")==0 && strcmp(gender,"male")==0)
{printf("According to the details entered insurance is available for you.\n");
 printf("your premium rate is Rs 4 per thousand with maximum policy amount of Rs 2 lakhs.");
}else
if( age > 25 && age < 35 && strcmp(livesin,"city")==0 && strcmp(health,"excellent")==0 && strcmp(gender,"female")==0)
{printf("According to the details entered insurance is available for you.\n");
 printf("your premium rate is Rs 3 per thousand with maximum policy amount of Rs 1 lakh.");
}else
if( age > 25 && age < 35 && strcmp(livesin,"village")==0 && strcmp(health,"poor")==0 && (strcmp(gender,"male")==0 || strcmp(gender,"female")==0))
{printf("According to the details entered insurance is available for you.\n");
 printf("your premium rate is Rs 6 per thousand with maximum policy amount of Rs 10,000.");}
else
{printf("Check again whether correct details are entered or not .\n");
 printf("According to the details entered insurance is not available.\n");}
}

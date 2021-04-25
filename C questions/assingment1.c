#include<stdio.h>
#include<conio.h>
void main()
{char name[10],native_place[10],answer[5];
 float per10,per12;
 printf("welcome to first year engineering\n");
 printf("what is your name ?\n");
 scanf("%s",name);
 printf("tell me your native place?\n");
 scanf("%s",native_place);
 printf("you are staying in hostel?\n");
 scanf("%s",answer);
 printf("tell me your 10th percentage\n");
 scanf("%f",&per10);
 printf("tell me your 12th percentage \n");
 scanf("%f",&per12);
 printf("Details entered by you are as following :\n");
 printf("Name : %s\n",name);
 printf("Native place : %s\n",native_place);
 printf("Staying in hostel : %s\n",answer);
 printf("Percentage in 10th : %f\n",per10);
 printf("Percentage in 12th : %f\n",per12);
}

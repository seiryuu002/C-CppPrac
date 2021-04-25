#include<stdio.h>
struct employee{
 char name[20];
 int ID;
 int salary;
};
void main()
{ int i;
struct employee e[3];
for(i = 0 ; i < 3 ; i++)
{printf("Enter the name of employee %d:",i+1);
scanf("%s",e[i].name);
printf("Enter ID number of employee %d:",i+1);
scanf("%d",&e[i].ID);
printf("Enter the salary of employee %d:",i+1);
scanf("%d",&e[i].salary);
printf("\n");
}
printf("Following are the details entered by the user...\n");
for(i = 0 ; i < 3 ; i++)
{printf("Name of the employee %d:",i+1);
printf("%s",e[i].name);
printf("\nID number of the employee %d:",i+1);
printf("%d",e[i].ID);
printf("\nSalary of the employee %d:",i+1);
printf("%d",e[i].salary);
printf("\n\n");
}
}

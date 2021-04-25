#include<stdio.h>
void main()
{int roll_no[5],phy_marks[5],chem_marks[5],maths_marks[5];
 char name[20][5];
 float percent[5] = {0,0,0,0,0};
 int i;
 for(i = 0; i < 5 ; i++)
 {printf("\nEnter the following details for student %d : \n", i+1);
  printf("Name : ");
  scanf("%s",name[i]);
  printf("Enrollment number : ");
  scanf("%d",&roll_no[i]);
  printf("Pyhsics marks out of 100 : ");
  scanf("%d",&phy_marks[i]);
  printf("Chemistry marks out of 100 : ");
  scanf("%d",&chem_marks[i]);
  printf("Mathematics marks out of 100 : ");
  scanf("%d",&maths_marks[i]);
  percent[i] = (phy_marks[i] + chem_marks[i] + maths_marks[i])/3;
 }printf("\nFollowing are the details of students : ...\n");
 for(i = 0; i < 5 ; i++)
 {printf("\nDetails of student %d are : \n", i+1);
  printf("Name : %s\n",name[i]);
  printf("Enrollment number : %d\n",roll_no[i]);
  printf("Pyhsics marks out of 100 : %d\n",phy_marks[i]);
  printf("Chemistry marks out of 100 : %d\n",chem_marks[i]);
  printf("Mathematics marks out of 100 : %d\n",maths_marks[i]);
  printf("Percentage of student %d is : %f\n",i+1,percent[i]);
}
}

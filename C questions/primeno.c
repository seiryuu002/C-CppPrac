  #include<stdio.h>
  #include<conio.h>
  void main()
  { int p,d,flag;
  printf("enter any number of your choice :");
  scanf("%d",&p);
  flag = 1;
  for(d = 2 ; d<=p-1 ; d++)
  if(d%p==0)
  {flag = 0;
  break;
  }
  if(flag==0 || p<=1)
  printf("given no %d is not a prime number",p);
  else
  printf("given number %d is a prime number",p);
  }

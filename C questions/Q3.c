#include<stdio.h>
void main()
{ int size = 0, i, j = 0, k = 0;
  printf("Enter the size of array:");
  scanf("%d",&size);
  int array[size],array_even[size],array_odd[size];
  printf("Enter the elements of array:\n");
  for(i = 0; i < size ; i++)
  {scanf("%d",&array[i]);
   }
   for(i = 0; i < size ; i++)
   { if(array[i]%2==0)
      {array_even[j] = array[i];
       j++;}
     else
      {array_odd[k] = array[i];
         k++;}
    }
    printf("Elements of even array are: ");
    for(i = 0; i < j ; i++)
    {
    printf("%d, ",array_even[i]);
    }
    printf("\nElements of odd array are: ");
    for(i = 0; i < k ; i++)
    {
    printf("%d, ",array_odd[i]);
    }
   }

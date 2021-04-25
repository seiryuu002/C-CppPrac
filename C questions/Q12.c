#include <stdio.h>

void main()

{

char str[100];

char *pointer;

printf("Enter any string: ");

gets(str);

pointer = str;

printf("The input string is: ");

while(*pointer!='\0')

printf("%c",*pointer++);

} 

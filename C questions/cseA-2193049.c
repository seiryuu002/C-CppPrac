#include <stdio.h>
#include<string.h>

void main()
{

    char s[50];
    int i,j,l,l1;

    /*read string*/
    printf("Enter any string: ");
    gets(s);

    /*calculating length*/
    for(l=0; s[l]!='\0'; l++);

    /*assign 0 to l1 - length of removed characters*/
    l1=0;

    /*Removing consecutive repeated characters from string*/
    for(i=0; i<(l-l1);)
    {
        if(s[i]==s[i+1])
        {
            /*shift all characters*/
            for(j=i;j<(l-l1);j++)
                s[j]=s[j+1];
            l1++;
        }
        else
        {
            i++;
        }
    }

    printf("String after removing characaters: %s\n",s);


}

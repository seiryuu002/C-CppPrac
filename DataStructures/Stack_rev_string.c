#include<stdio.h>
#include<string.h>
#define MAX_SIZE 21
char stack[MAX_SIZE];
int top = -1;

void push(char x)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow");
        return;
    }

    stack[++top] = x;
}
void pop()
{
    if (top == -1)
    {
        printf("Error: No element to pop\n");
        return;
    }
    top--;
}
char Top()
{
    return stack[top];
}

void reverse( char *str, int n){
    for(int i = 0; i<n; i++){
        push(str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = Top();
        pop(); 
    }
    printf("Output: %s", str);
}

int main(){
    char str[10];
    printf("Enter a string: ");
    gets(str);
    printf("Input = %s\n", str);
    reverse(str, strlen(str));
}
#include<stdio.h>
void print_one(char *c){
    printf("\n");
    while(*c!='\0'){
        printf("%c", *c);
        c++;
    }
    printf("\n"); 
}
void print_two(char c[]){
    int i = 0;
    printf("\n");
    while(c[i] != '\0'){
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
    
}
void main(){
    char c[20] = "Hello";
    print_one(c);
    print_two(c); 
}

#include<stdio.h>
#include<stdlib.h>
int cash = 100;
void play(int bet){
    // char C[3] = {'J', 'Q', 'K'};
    char *C = (char *)malloc(3 * sizeof(char));
    C[0] = 'J';
    C[1] = 'Q';
    C[2] = 'K';
    printf("Shuffling...");
    srand(time(NULL));
    int i;
    for(i = 0; i<5 ; i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    int playerguess;
    printf("What's the position of Queen 1, 2 or 3");
    scanf("%d", &playerguess);
    if(C[playerguess-1] == 'Q'){
        cash += 3*bet;
        printf("You Win! Result = %c %c %c, Total cash = %d \n", C[0], C[1], C[2], cash);
    }
    else{
        cash -= bet;
        printf("You loose! Result = %c %c %c, Total cash = %d \n", C[0], C[1], C[2], cash);
    }
    free(C);
}
void  main(){
    int bet;
    printf("welcome to Virtual Casino\n");
    printf("Total cash = %d\n", cash);
    while(cash){
        printf("What is your bet: ");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash)
        break;
        play(bet);
        printf("\n***************************\n");
    }
}
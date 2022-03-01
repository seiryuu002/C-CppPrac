#include<stdio.h>
void func(int (*a)[3]){                          // argument passed is pointer of 1-d array of 3 integers i.e int (*)[3]
    for(int i = 0; i < 2 ; i++){
        for (int j = 0; j < 3; j++){
            a[i][j] = 2*a[i][j];
        }
    }

}

void func_a(int (*a)[2][2])                    // argument passed is a pointer of 2-d array of integers of dimension 2x2 i.e, int (*)[2][2]
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                a[i][j][k] = 2 * a[i][j][k];
            }
                
        }
    }
}

void  main(){
    int a[2][3] = {{2, 4, 6}, {5, 9, 12}};
    int b[3][2][2] = {{{2, 5}, {7, 9}}, {{3, 4},{6, 1}}, {{0, 8},{11, 1}}};
    printf("\n%d, %d, %d, %d\n", a, *(a[0]+ 1), *(*(a+1) + 1), &a[0][0]);
    func(a);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n%d, %d, %d, %d\n", b, *b, b[0], &b[0][0]);
    func_a(b);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", b[i][j][k]);
            }
        }
    }
}
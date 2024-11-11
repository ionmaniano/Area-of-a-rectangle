// Online C compiler to run C program online
#include <stdio.h>

int score[2][2][2]={
    {{65,92},
    {84,72}},
    {{35,70},
    {59,67}}
};
int main() {
    int i,j,k;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            for ( k = 0; k < 2; k++)
            {
                printf("score[%d][%d][%d]=%d\n",i,j,k,score[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}



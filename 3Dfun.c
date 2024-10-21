#include <stdio.h>
 int mark[2][2][3]={
        {{40,10,60},
        {70,80,90}},
        {{40,50,60},
        {10,20,30}}
    };
int main(){
    int i,j,k;
    for (i = 0; i < 2; i++)//matrices
    {
        for (j = 0; i < 2; j++){//rows
            for (k = 0; k < 3; k++){
                printf("mark[%d][%d][%d]=%d\n",i,j,k,mark[i][j][k]);
            }
        }

    }
    return 0;}

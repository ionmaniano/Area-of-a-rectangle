#include <stdio.h>
int mark[2][3]={
        {40,10,60},
        {70,80,90},
     };
    int main(){
        int i,j;
        for (i = 0; i < 2; i++)
    {
        for (j = 0; i < 3; j++){
         printf("mark[%d][%d]=%d\n",i,j,mark[i][j]);
    }
    }
    }

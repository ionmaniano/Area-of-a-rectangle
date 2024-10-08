#include <stdio.h>
int main(){
    int n=1, s;
    printf("Enter number of terms:");
    scanf("%d",&s);
    
    while (n<=s)
    {
        printf("The number is%d: and the cube of %d\n is:",n,n,n*n*n);
        n=n+1;
    }

    return 0;
     
}
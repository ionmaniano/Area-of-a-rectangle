#include <stdio.h>

int main() {
int i=1, s ;

    printf("Enter number of terms: ");
    scanf("%d",&s);
do
{
    printf("The number is:%d and the cube of %d is:%d\n",i,i,i*i*i );
    i=i+1;
}
while (i<=s);
    return 0;
}
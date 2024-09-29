#include <stdio.h>
int main() {
    int sub1,sub2,sub3;
    int average;
    
    printf("Enter sub1:");
    scanf("%d",&sub1);
    
    printf("Enter sub2:");
    scanf("%d",&sub2);
    
    printf("Enter sub3:");
    scanf("%d",&sub2);
    
    average=(sub1+sub2+sub3)/3;
    printf("Your average score is %d\n",average);
    
    
    if(average>=70 && average <= 100){
        printf("You have scored grade A");
    }
    else if(average>=60){
        printf("You have scored grade B");
    }
    else if(average>=50){
         printf("You have scored grade C");
    }
    else if(average>=40){
         printf("You have scored grade D");
    }
   else{
       printf("You have failed");
   }

    return 0;
}

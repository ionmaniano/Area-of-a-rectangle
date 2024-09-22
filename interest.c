
#include <stdio.h>

int main() {
    
    int simple_interest,compound_interest,principle,rate,time;//declaration and initialization
    
    printf("Enter principle:");
    scanf("%d",&principle);
    
    printf("Enter rate:");
    scanf("%d",&rate);
    
    printf("Enter time:");
    scanf("%d",&time);

    simple_interest=(principle*rate*time)/100;
    compound_interest=principle*(1-rate/100)^time;

    printf("The simple_interest is: sh.%d and The compund interest is: sh.%d" ,simple_interest,compound_interest);

    
}
   

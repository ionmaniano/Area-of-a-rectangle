//calculation of area of a circle using functions
#include <stdio.h>
#include <math.h>

float area(float r,float pi);

int main(){ 
    float r;
    float Area;
    float pi;

    printf("Enter radius:");
    scanf("%f",&r);
    printf("Enter PI:");//3.142 
    scanf("%f",&pi);

    Area=area(r,pi);//function calling

    printf("The area is %.2f\n",Area);

   
}
// function declaration
float area(float r, float pi){
    float Area;
    Area=pi*r*r;
    return Area;
}








#include <stdio.h>

int main() {
    
    int pi=3.142,radius,height,surface_area,volume;//declaration and initialization
    
    printf("Enter radius:");
    scanf("%d",&radius);
    
    printf("Enter height:");
    scanf("%d",&height);
    
    volume=pi*radius*radius*height;
    printf("The volume is: %d\n" ,volume);

    surface_area=(2*pi*radius*radius)+(2*pi*radius*height);
    printf("and The surface area is:%d",surface_area);
    
}
   

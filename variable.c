#include <stdio.h>
int main() {
 char a ; //c
    char name[]={};
    int age;
    float area;
    double salary;

    printf("Enter a Character:");
    scanf("%c",&a);
    printf("The Character is %c\n",a);

    printf("Enter Your Name:");
    scanf("%s",&name);
    printf("Your Name is %s\n",name);

    printf("Enter Your age:");
    scanf("%d",&age);
    printf("Your age is %d\n",age);
    
    printf("Enter area:");
    scanf("%f",&area);
    printf("Your age is %f\n",area);

    printf("Enter Your Salary:");
    scanf("%lf",&salary);
    printf("Your age is %lf",salary);
}
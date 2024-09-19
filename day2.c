// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char a='k';//%c
   char name[]="Ian";//%s
   int age=20;//%d
   float area=245.540;//%f
   double salary=120000;//%lf
   printf("The character is %c \n",a);
   printf("The name is %s \n",name);
   printf("The age is %d years\n",age);
   printf("The area is %.3f \n",area);
   printf("The salary is %10.3lf ",salary);

    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct child{
    char name[50];
    int age;
    float height;
};

int main() {
    struct child class[3] = {
        {"Alice", 10, 3.5},
        {"Bob", 5, 4.0},
        {"Charlie", 3, 3.8}
    };


FILE *fprt = fopen("C:\\Users\\ACW\\OneDrive\\Desktop\\cprogramming\\array.txt", "w");
    if (fprt==NULL){
    printf("Error opening the file");
    exit(1);
    }
//write on the file
    fwrite(class, sizeof(struct child), 3, fprt);
    fclose(fprt);

    fprt=fopen("C:\\Users\\ACW\\OneDrive\\Desktop\\cprogramming\\array.txt","r");
    if (fprt==NULL){
    printf("Error opening the file");
    exit(1);
         }
//read from the file
    fread(class, sizeof(struct child), 3, fprt);
    fclose(fprt);

    printf("Data read from file:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Height: %.1f\n", class[i].name, class[i].age, class[i].height);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i, n, marks;
    char name[50];

    FILE *fptr;

    fprt=fopen("C:\\Users\\ACW\\OneDrive\\Desktop\\cprograms\\nstudent.txt","a");
    if (fprt==NULL){
        printf("Error opening the file");
        exit(1);
    }

    // Prompt user for input
    printf("Enter the number of student: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        printf("Enter student name and marks:",i);
        scanf("%s %d",&name,&marks)

    // Append the name and marks to the file
        fprintf(fptr, "Student %d: Name = %s, Marks = %d\n", i, name, marks);
    }

    fclose(fptr);
    printf("Data written successfully to students.txt.\n");


    return 0;
}

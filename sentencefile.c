// Online C compiler to run C program online
#include <stdio.h>//scanf(),printf(),fprintf(),fclose()

int main() {
    char sentence[100];
    FILE *fptr;

    FILE *fprt = fopen("C:\\Users\\ACW\\OneDrive\\Desktop\\cprograms\\array.txt", "wb");
    if (fprt==NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("write a sentence upto 100 words:");
   fgets(sentence, sizeof(sentence), stdin);

    // Write the sentence to the file
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Sentence written to file successfully.\n");
}

int main() {
        writeToFile();
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
char sentence[200];

FILE *fp;//pointer declaration

    fp=fopen("C:\\Users\\ACW\\OneDrive\\Desktop\\cprogramming\\output.txt","w");
    if(fp==NULL){
        printf("Error opening the file");
        exit(1);
    }
    //geting user input
    printf("write a sentence of atmost 200 words:");
    fgets(sentence,sizeof(sentence),stdin);

    //writing to the file
    fprintf(fp,"Your sentence is %s\n",sentence);

    //closing the file
    fclose(fp);

    //opening the file for reading
    fp=fopen("C:\\Users\\ACW\\OneDrive\\Desktop\\cprogramming\\output.txt","r");
    if(fp==NULL){
        printf("Error opening the file");
        exit(1);
    }
    fgets(sentence,sizeof(sentence),fp);
    printf("The sentence from the file is %s",sentence);

    fclose(fp);


    //opening the file in append mode
    fp=fopen("C:\\Users\\ACW\\OneDrive\\Desktop\\cprogramming\\output.txt","a");
    if(fp==NULL){
        printf("Error opening the file");
        exit(1);
    }
    // Get a second sentence from the user
    printf("Enter another sentence to append (up to 200 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    // Append the sentence to the file
    fprintf(fp, "%s", sentence);
    fclose(fp);

    printf("sentence written,read and appended successfuly\n");


    return 0;


}

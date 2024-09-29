// fine for overdue library books 
#include <stdio.h>

int main() {
    // Write C code here
    int BI;//bookID
    int DD;//due date
    int RD;//return date
    int OV;//overdue
    int amount;
    
    printf("Enter the bookID: ");
    scanf("%d",&BI);
    
    printf("Enter the Due date: ");
    scanf("%d",&DD);
    
    printf("Enter the Return date: ");
    scanf("%d",&RD);
    
    OV=RD-DD;
    printf("The overdue days are %d\n",OV);
    
    if(OV>=1 && OV<=7){
        int rate=20;
        amount=OV*rate;
        printf("The amount to be paid is %d\n",amount);
    }
    else if(OV>=8 && OV<14){
        int rate=50;
        amount=OV*rate;
        printf("The amount to be paid is %d\n",amount);
    }
    else{
        int rate=100;
        amount=OV*rate;
        printf("The amount to be paid is %d\n",amount);

    }
        

    
    


}
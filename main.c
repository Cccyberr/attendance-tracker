
#include <stdio.h>

void main() {
    int totalattended , totalclasses;
    char subject[20];
    printf("enter the subject name :  ");
    scanf("%s",subject);
    printf("enter the total number of classes:   ");
    scanf("%d",&totalclasses);
    printf("enter the number of classes attended:  ");
    scanf("%d",&totalattended);
    
    int missed = totalclasses - totalattended;
    printf("number of classes missed is:  %d\n", missed);
    
   int half = totalclasses / 2 ;
   if( missed<= half){
       printf("you are safe to bunk more");
   }else if (missed == half) {
        printf("You're at the limit. Be careful.\n");
    } else {
        printf("No more bunking!\n");
    }
    
}
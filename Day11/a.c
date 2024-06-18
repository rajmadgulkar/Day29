#include <stdio.h>
void main(){
        int startnum , endnum;


        printf("Enter the start number\n");
        scanf("%d",&startnum);

        printf("Enter the end number\n");
        scanf("%d",&endnum);
 while(startnum<=endnum){
         if (startnum%4==0 && startnum%5==0){
                 printf("%d is divisible 4 & 5\n",startnum);
         }
        startnum++;
 }
}
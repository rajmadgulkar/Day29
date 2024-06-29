#include<stdio.h>
void main(){
    char ch='A';
    for (int i=1;i<=5;i++){
        for(int sp=4;sp>=i;sp--){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }
    

}
/*
         A
       B C
     D E F
   G H I J
 K L M N O
 */

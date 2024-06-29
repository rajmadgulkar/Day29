/* 
 a c e g i
 a c e g
 a c e
 a c
 a
*/

#include <stdio.h>
void main(){
    

    for (int i=1; i<=5;i++){
        int ch='a';

        for(int j=5; j>=i;j--){
            printf(" %c",ch);
            ch=ch+2;
        }
        printf("\n");
        

    }
}
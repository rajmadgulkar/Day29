/* 
a c e
a c e
a c e
*/

#include <stdio.h>
void main(){
    

    for (int i=1; i<=3;i++){
        int ch='a';

        for(int j=1; j<=3;j++){
            printf(" %c",ch);
            ch=ch+2;
        }
        printf("\n");
        

    }
}
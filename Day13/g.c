/* 
 a
 c e
 g i k
 m o q s

*/

#include <stdio.h>
void main(){
    char ch='a';

    for (int i=1; i<=4;i++){

        for(int j=1; j<=i;j++){
            printf(" %c",ch);
            ch=ch+2;
        }
        printf("\n");
        

    }
}
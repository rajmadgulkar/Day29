/* 
A
B B
C C C
D D D D 
E E E E E 
*/

#include <stdio.h>
void main(){
    int ch ='A';

    for (int i=1; i<=5;i++){

        for(int j=1; j<=i;j++){
            printf(" %c",ch);
        }
        printf("\n");
        ch++;

    }
}
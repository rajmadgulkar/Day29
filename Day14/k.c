/*
 1 4 9 16 25
 1 4 9 16
 1 4 9
 1 4
 1
*/

#include <stdio.h>
void main(){
    

    for (int i=1; i<=5;i++){

        int x=1;

        for(int j=5; j>=i;j--){
            printf(" %d",x*x);
            x++;
        }
        printf("\n");

    }
}
/* 
 1 4 9 16 25
 36 49 64 81
 100 121 144
 169 196
 225
*/

#include <stdio.h>
void main(){
    int x=1;

    for (int i=1; i<=5;i++){

        for(int j=5; j>=i;j--){
            printf(" %d",x*x);
            x++;
        }
        printf("\n");
        

    }
}
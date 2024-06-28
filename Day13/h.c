/* 1
   1 2 
   1 2 3
   1 2 3 4 
   1 2 3 4 5
*/

#include <stdio.h>
void main(){
    

    for (int i=1; i<=5;i++){
        int x=1;

        for(int j=1; j<=i;j++){
            printf(" %d",x);
            x++;
        }
        printf("\n");
        

    }
}
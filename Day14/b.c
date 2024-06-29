 /*
 1 1 1 1 1
 1 1 1 1
 1 1 1
 1 1
 1
*/
#include <stdio.h>
void main(){
    for (int i=1; i<=5;i++){
        int x=1;
        for (int j=5;j>=i;j--){
            printf(" %d",x);
        }
        printf("\n");
    }
}


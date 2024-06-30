#include <stdio.h>
void main(){
    int rows;
    printf("ROWS:");
    scanf("%d",&rows);


    int x=9;

    for(int i=rows;i>=1;i--){
        for(int j=1;j<=rows;j++){
            if(x%2==0){
                printf(" %d",x*x);
                x--;

            }else{
                printf(" %d",x);
                x--;
            }
        }
        printf("\n");
    }
}
/*
ROWS:3
 9 64 7
 36 5 16
 3 4 1
 */

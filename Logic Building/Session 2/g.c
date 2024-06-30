#include<stdio.h>
void main(){
    int rows;
    
    printf("ROWS:");
    scanf("%d",&rows);

    char ch='D';

    for(int i=rows; i>=1;i--){
        for(int j=1;j<=rows;j++){
            printf(" %c",ch);


        }
        ch--;
        printf("\n");
    }
}
/*
ROWS:4
 D D D D
 C C C C
 B B B B
 A A A A
 */
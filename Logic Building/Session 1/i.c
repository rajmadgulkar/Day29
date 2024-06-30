#include<stdio.h>
void main(){
    int rows;
    char ch='A';
    printf("ROWS:");
    scanf("%d",&rows);
    for (int i=rows;i>=1;i--){
        for (int j=1;j<=rows;j++){
            printf(" %c",ch);

        }
        ch++;
        printf("\n");
    }
}
/*
ROWS:3
 A A A
 B B B
 C C C
 */
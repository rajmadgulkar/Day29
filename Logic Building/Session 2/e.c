#include<stdio.h>
void main(){
    int rows;
    printf("ROWS:");
    scanf("%d",&rows);

    char ch='a';
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=3;j++){
            if (j%2==1){
                printf(" %c",ch);
                ch++;
            }else{
                printf(" %c",ch-32);
                ch++;
            }
        }
        printf("\n");
    }
}
/*
ROWS:3
 a B c
 d E f
 g H i
 */
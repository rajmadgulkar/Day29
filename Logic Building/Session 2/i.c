#include <stdio.h>
void main(){
    int rows;
    printf("ROWS:");
    scanf("%d",&rows);

char ch='A';

for(int i=0;i<rows;i++){
    for(int j=0;j<rows;j++){
        if((i*3+j)%2==0){
            printf(" %c",ch);
            ch++;

        }else{
            printf(" %c",ch+32);
            ch++;
        }
    }
    printf("\n");
}
}
/*
ROWS:3
 A b C
 d E f
 G h I
 */
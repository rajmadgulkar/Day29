#include <stdio.h>
void main(){
    int rows;
    printf("ROWS:");
    scanf("%d",&rows);

char ch='A';

for(int i=1;i<=rows;i++){
    for(int j=1;j<=rows;j++){
        if(j%2==1){
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
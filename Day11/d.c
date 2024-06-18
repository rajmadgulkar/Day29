#include <stdio.h>
void main(){
        int y;

        printf("Enter the no of days:");
        scanf("%d",&y);
        while(y>=0){
                printf("%d days remaining\n",y);
                y=y-1;

        }
}
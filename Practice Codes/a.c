#include <stdio.h>
void main(){
        int x;
        printf("Enter no of days:");
        scanf("%d",&x);
        printf("The no of days:%d\n",x);


        while(x!=0){
                printf("%d days remaining\n",x);

                x=x-1;
        }
        if (x==0){
                printf("%d due date",x);
        }
}
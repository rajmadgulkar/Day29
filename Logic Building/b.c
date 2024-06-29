#include<stdio.h>
void main(){
    int start;
    int end;
    printf("Enter Start:");
    scanf("%d",&start);
    printf("Enter End:");
    scanf("%d",&end);

    for(int i=end;i>=start;i--){
        if(i%3==0&&i%7==0){
            printf("%d\n",i);
        }
    }
}

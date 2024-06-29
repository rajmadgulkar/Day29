#include<stdio.h>
void main(){
    int start;
    int end;
    printf("Enter Start:");
    scanf("%d",&start);
    printf("Enter End:");
    scanf("%d",&end);

    for (int i=start;i<=end;i++){
        if (i%2!=0){
            printf("%d\n",i*i);
        }
    }
    printf("\n");

}

/*
Enter Start:10
Enter End:20
121
169
225
289
361
*/
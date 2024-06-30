#include<stdio.h>
void main(){
    int start;
    int end;
    printf("Enter Start:");
    scanf("%d",&start);
    printf("Enter End:");
    scanf("%d",&end);

    for (int i=start;i<=end;i++){
        if (i%2==0){
            printf("%d\n",i*i*i);
        }
        else{
            printf("%d\n",i);
        }
    }
}
/*
Enter Start:10
Enter End:20
1000
11
1728
13
2744
15
4096
17
5832
19
8000
*/
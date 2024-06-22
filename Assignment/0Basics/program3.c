#include <stdio.h>
void main(){
    int num1;
    int num2;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    
    printf("Enter 2nd number:");
    scanf("%d",&num2);

    if(num1>num2){
        printf("%d",num1);
    }else{
        printf("%d",num2);
    }
}

// Enter 1st number:2 
// Enter 2nd number:4
// 4
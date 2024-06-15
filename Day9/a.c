#include <stdio.h>
void main(){

int x;
printf("Enter number\n");
scanf("%d",&x);
printf("Entered number by the user is %d\n",x);


if(x%9==0){
printf("The entered no is divisible by 1 & 9\n");
}else{
printf("The entered no is not divisible by 1 & 9\n");
}
}
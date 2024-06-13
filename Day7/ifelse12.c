#include <stdio.h>
void main(){
int x;
printf("Enter the value\n");
scanf("%d",&x);
printf("Entered value= %d\n",x);

if(x%2==0){
printf("x is divisible by 2\n");
}
else{
printf("x is not divisible by 2\n");
}
}
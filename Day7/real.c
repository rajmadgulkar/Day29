#include<stdio.h>
void main(){
float x;
printf("How was your interview?\n");
printf("Enter the percentage you think you can crack it\n");
scanf("%f\n",&x);

if(x>=80){
printf("The user can crack it\n");
}
else{
printf("User needs to work hard\n");
}
}
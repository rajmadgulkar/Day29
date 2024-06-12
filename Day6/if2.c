#include <stdio.h>
void main(){
float  income;
printf("Enter income=\n");
scanf("%f",&income);
printf("The income of an employee is %f\n",income);

if(income>=0 && income<=500000){
printf("The tax percentage will be 5");
}
if(income>=500000 && income<=1000000){
printf("The tax percentage will be 10");
}
if(income>=1000000 && income<=1500000){
printf("The tax percentage will be 15");
}
if(income>=1500000 && income<=2000000){
printf("The tax percentage will be 20");
}
if(income>=2000000){
printf("The tax percentage will be 30");
}
}

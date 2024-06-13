#include <stdio.h>
void main(){
float pMoney;
printf("Enter the Pocket Money\n");
scanf("%f",&pMoney);
printf("The Pocket Money is %f\n", pMoney);

if (pMoney>=25000){
printf("Hrishikesh\n");
}
else if(pMoney>=20000){
printf("Varanasi\n");
}
else if(pMoney>=15000){
printf("Ayodhya\n");
}
else if(pMoney>=10000){
printf("Omkareshwar\n");
}
else if(pMoney>=5000){
printf("Ujjain\n");
}
else if(pMoney>=3000){
printf("Tryambakeshwar\n");
}
else if(pMoney>=2000){
printf("Rokdoba\n");
}else{
printf("Ghari basu\n");
}
}
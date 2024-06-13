#include <stdio.h>
void main(){
int x;
printf("Enter a number b/w 0 to 9\n");
scanf("%d",&x);
printf("Entered number is %d\n", x);
switch(x){
case 1:
printf("One\n");
break;
case 2:
printf("Two\n");
break;
case 3:
printf("Three\n");
break;
case 4:
printf("Four\n");
break;
case 5:
printf("Five\n");
break;
case 6:
printf("Six\n");
break;
case 7:
printf("Seven\n");
break;
case 8:
printf("Eight\n");
break;
case 9:
printf("Nine\n");
break;
default :
printf("Wrong input\n");
}
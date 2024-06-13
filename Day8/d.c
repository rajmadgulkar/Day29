#include <stdio.h>
void main(){
int x;
printf("Enter a number b/w 0 to 9\n");
scanf("%d",&x);
printf("Entered number is %d\n", x);

if(x==1){
printf("One\n");
}else if(x==2){
printf("Two\n");
}else if(x==3){
printf("Three\n");
}else if(x==4){
printf("Four\n");
}else if(x==5){
printf("Five\n");
}else if(x==6){
printf("Six\n");
}else if(x==7){
printf("Seven\n");
}else if(x==8){
printf("Eight\n");
}else if(x==9){
printf("Nine\n");
}else{
printf("Wrong input\n");
}
}
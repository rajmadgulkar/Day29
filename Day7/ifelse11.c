#include <stdio.h>
void main(){
int x=1;
printf("Start main\n");

if(--x){
printf("In first if block\n");
}
if(++x || x++){
printf("In second if block\n");
}
printf("%d\n",x);
printf("End main\n");
}
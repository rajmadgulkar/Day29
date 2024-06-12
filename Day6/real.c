#include <stdio.h>
void main(){
char robbery;
printf("Enter value\n");
scanf("%c",&robbery);
printf("The robbery is done by %c\n", robbery);

if(robbery=='Y'||robbery=='y'){
printf("Robbery was done by Muskan\n");
}
if(robbery=='N'||robbery=='n'){
printf("Robbery was done by Jaya\n");
}
}
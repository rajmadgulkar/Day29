#include <stdio.h>
void main(){
char userData;
printf("Enter character\n");
scanf("%c",&userData);
printf("Entered character=%c\n",userData);

if (userData>='a'&&userData<='z'){
printf("you entered a lowercase character");
}
else{
printf("you entered a uppercase character");
}
}
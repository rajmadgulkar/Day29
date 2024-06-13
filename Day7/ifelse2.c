#include <stdio.h>
void main(){
printf("Start main\n");

char ch1='A';
char ch2='48';

if (ch1){
printf("In first if block\n");
}
if (ch2){
printf("In second if block\n");
}

printf("End main\n");

}
// warning: multi-character character constant [-Wmultichar]
//     6 | char ch2='48';
// all lines will be printed


#include <stdio.h>
void main(){
        const float x=67.5;//using const
//      printf("Enter value\n");
//      scanf("%d",&x);

        switch(x){
                case 65.5:
                        printf("value of x is 65\n");
                        break;

                case 66.5:
                        printf("value of x is 66\n");
                        break;
                case 67.5:
                        printf("value of x is 67\n");
                        break;
                case 68.5:
                        printf("value of x is 68\n");
                        break;
                default:
                        printf("wrong input");
                        break;

                }
}

// e.c: In function ‘main’:
// e.c:7:16: error: switch quantity not an integer
//     7 |         switch(x){
//       |                ^
// e.c:8:17: error: case label does not reduce to an integer constant
//     8 |                 case 65.5:
//       |                 ^~~~
// e.c:12:17: error: case label does not reduce to an integer constant
//    12 |                 case 66.5:
//       |                 ^~~~
// e.c:15:17: error: case label does not reduce to an integer constant
//    15 |                 case 67.5:
//       |                 ^~~~
// e.c:18:17: error: case label does not reduce to an integer constant
//    18 |                 case 68.5:
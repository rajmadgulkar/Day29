#include <stdio.h>
void main(){
        const int x='B';//using const
//      printf("Enter value\n");
//      scanf("%d",&x);

        switch(x){
                case 65:
                        printf("value of x is 65\n");
                        break;

                case 66:
                        printf("value of x is 66\n");
                        break;
                case 67:
                        printf("value of x is 67\n");
                        break;
                case 68:
                        printf("value of x is 68\n");
                        break;
                default:
                        printf("wrong input");
                        break;

                }
}
#include <stdio.h>
void main(){
        const int x=10;
        printf("%d",x);
        //x=30;
        printf("%d",x);
}
// error: assignment of read-only variable ‘x’
//     5 |  x=30;
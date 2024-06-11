#include <stdio.h>
void main(){
    int x=8;
    int ans;
    printf("%d\n",x);
    ans= ++x + ++x + ++x + ++x;
    printf("%d\n",ans);
    printf("%d\n",x);
}
#include <stdio.h>
void main(){

    int x=9;
    int ans;
    ans=++x + x++ + ++x;
    printf("%d\n",x);
    printf("%d\n",ans);


    int ans1;
    ans1=++x + ++x + ++x + ++x;
    printf("%d\n",x);
    printf("%d\n",ans1);

    int ans2;
    ans2=x++ + x++ + ++x + x++ + ++x;
    printf("%d\n",x);
    printf("%d\n",ans2);

    int ans3;
    ans3=x++ + x++ + x++ + x++;
    printf("%d\n",x);
    printf("%d\n",ans3);



}

// 12
// 33
// 16
// 59
// 21
// 92
// 25
// 90
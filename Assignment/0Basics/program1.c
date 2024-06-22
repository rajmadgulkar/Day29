#include <stdio.h>
void main(){
    int num;
    char chr;
    float rs;
    double crMoney;

    printf("Enter num:");
    scanf("%d",&num);
    printf("Enter chr:");
    scanf(" %c",&chr);
    printf("Enter rs:");
    scanf("%f",&rs);
    printf("Enter crMoney:");
    scanf("%lf",&crMoney);

    printf("%d\n",num);
    printf("%ld\n",sizeof(num));

    printf("%c\n",chr);
    printf("%ld\n",sizeof(chr));

    printf("%f\n",rs);
    printf("%ld\n",sizeof(rs));

    printf("%f\n",crMoney);
    printf("%ld\n",sizeof(crMoney));


}
// Enter num:10
// Enter chr:S
// Enter rs:55.20
// Enter crMoney:542154313480.544543
// 10
// 4
// S
// 1
// 55.200001
// 4
// 542154313480.544556
// 8
#include <stdio.h>
void main(){
        int noofPersons;
        char row;
        float tPrice;


        printf("Enter no of Persons:");
        scanf("%d",&noofPersons);

        printf("Enter the ro6w:");
        scanf(" %c",&row);// the row gets skip as \n goes as input to the row. 
        // It is eliminated by giving space before %c.

        printf("Enter total ticket price:");
        scanf("%f",&tPrice);

        printf("No of friends:%d\n",noofPersons);
        printf("The row you got:%c\n",row);
        printf("Total ticket price:%f\n",tPrice);

}
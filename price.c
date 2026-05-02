#include<stdio.h>
int main()
{
    float price[3];
    printf("enter three prices :");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("total price 1 :",price[0]+(price[0]*0.18));
    printf("total price 2 :",price[1]+(price[1]*0.18));
    printf("total price 3 :",price[2]+(price[2]*0.18));

    return 0;


}
// This program is prepared by 22CE002_Palak
#include<stdio.h>
void main()
{
    char Credit;
    int Stock,Order;

    printf("\nEnter the value of Credit :");
    scanf("%c",&Credit);

    printf("\nEnter the value of Stock :");
    scanf("%d",&Stock);

    printf("\nEnter the value of Order :");
    scanf("%d",&Order);

    if(Credit=='Y' && Stock<Order)
    {
        printf("\nRequirement unsuccessful");
    }
    else if(Credit=='Y' && Stock>=Order)
    {
        printf("\nRequirement successful");
    }
    else if(Credit=='N')
    {
        printf("\nClear your credit");
    }
    printf("\n-->This program is prepared by 22CE002_Palak");
}
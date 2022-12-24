// This program is prepared by 22CE002_Palak
#include<stdio.h>
int main()

{
    int price,total=0,i;

    {
        for(i=1;i++;)
        {
    printf("Enter a Price:");
    scanf("%d",&price);
            if(price==0)
                break;
            else
                total+=price;
        }
    }
    printf("Customer have to pay:%d",total);
    printf("\n-->This program is prepared by 22TCE100_Palak");
    return 0;
}
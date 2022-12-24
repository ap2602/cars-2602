// This program is prepared by 22CE002_Palak
#include<stdio.h>
void main()
{
    int m,p,c,check;

    // continue;
    m=21;

    while(1)
    {
        printf("\a");
        printf("\nNumber of Matchstick :%d",m);

        invalid:
        printf("\nPick 1 or 2 or 3 or 4 :");
        scanf("%d",&p);

        if(p<=4 && p>=1)
        {
            c=5-p;
            printf("Computer picked :%d \n",c);
        }
        else
        {
            printf("Invalid Selection\n");
            printf("Please Select number between 1 and 4.\n");
            goto invalid;    
        }
        m=m-p-c;

        printf("Number of Matchstick left are : %d\n",m);
        if(m==1)
        {
            printf("Number of matches left : %d\n",m);
            printf("You lost the game.");
            break;
        }
    }
    printf("\n-->This program is prepared by 22CE002_Palak");
}
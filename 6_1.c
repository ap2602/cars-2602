// This program is prepared by 22CE002_Palak
#include<stdio.h>
#include<string.h>
void main()
{
    int u,l,d,i;
    char pass[20];

    do
    {
       u=0;l=0;d=0;
       printf("\nEnter your Password :");
       scanf("%s",pass);

       for(i=0;i<strlen(pass);i++)
       {
        if(islower(pass[i]))
        {
            l=1;
        }
        else if(isupper(pass[i]))
        {
            u=1;
        }
        else if(isdigit(pass[i]))
        {
            d=1;
        }
       } 
       if (l==1 && u==1 && d==1)
       {
        printf("Password is Good");
       }
       else
       {
         printf("Invalid Password");
       }
       
    } while (l==0 || u==0 || d==0);
    printf("\n-->This program is prepared by 22CE002_Palak");
}
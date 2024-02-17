/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>

int main()
{
    int pow,i,res=1,base=2;
    printf("enter the power: ");
    scanf("%d", &pow);
    for(i=0;i<=pow;i++)
    {
        if(i==0)
        {
            printf("2^%d : %d\n",i,res);
        }
        else
        {
            res=res*base;
            printf("2^%d : %d\n",i,res);
        }
    }


    return 0;
}


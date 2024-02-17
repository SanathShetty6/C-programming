/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
//Find poer of N numbers.
#include <stdio.h>

int main()
{
    int pow,i,res=1,base;
    printf("enter the Base: \n");
    scanf("%d", &base);
    printf("enter the power: \n");
    scanf("%d", &pow);
    for(i=0;i<=pow;i++)
    {
        if(i==0)
        {
            printf("%d^%d : %d\n",base,i,res);
        }
        else
        {
            res=res*base;
            printf("%d^%d : %d\n",base,i,res);
        }
    }


    return 0;
}


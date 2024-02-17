/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the marks: ");
    scanf("%d", &n);

    if(n>=85 && n<=100)
    {
        printf("\nDistinction grade");
    }
    else if( n<=84 && n>=70)
    {
        printf("\nFirst calss");
    }
    else if( n<=69 && n>=55)
    {
        printf("\nsecond calss");
    }
    else if( n<=54 && n>=36)
    {
        printf("\nSecond calss");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
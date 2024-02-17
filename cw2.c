/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>
int main()
{ int num,rem=0,sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num>0) 
    {
	rem=num%10;
	sum=sum+rem;
	num=num/10;
    }
printf("The sum of digit is %d \n", sum);
return 0;
}

/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>

int main()
{
    int n,num,rem=0,rev=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    n = num;
    while(num > 0) 
    {
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
    }
printf("The reverse of digit is %d \n", rev);
//To check palindrome
if(n == rev)
printf( "%d is palindrome \n.", n);
else
printf("%d is not palindrome\n", n);
    return 0;
}


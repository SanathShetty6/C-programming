/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>
int main()
{ int num,rem=0,sum=0,rev=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num>0) 
    {
	rem=num%10;
	sum=sum*rem;
/*rev=rev*10+num;*/
	num=num/10;
    }
/*printf("The sum of digit is %d \n", sum);*/
printf("Reverse number is %d \n", sum);
if (sum==num)
    printf("Number is palindrome");
else
    printf("Number is not palindrome");

return 0;
}

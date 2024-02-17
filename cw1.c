/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>
int main()
{ int n,n1,n2;
    printf("Enter the number" );
    scanf( "%d%d%d", &n,&n1,&n2);
    if (n>n1) 
    {
	if (n>n2)
	printf (" %d is maximun", n);
	else
	    printf(" %d is maximum", n2);
    }
    else
    {
	if(n1>n2)
	    printf ("%d is maximum", n1);
	else
	    printf ("%d is maximun", n2);
    }

    return 0;
}

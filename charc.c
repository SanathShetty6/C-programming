/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the charcter \n");
    scanf("%c", &ch);

    if( ch>='A' && ch<='Z')
    {
        printf("Charcater %c is uppercase \n", ch);
    }
    else if( ch>='a' && ch<='z')
    {
        printf("Character %c is lower case \n", ch);
    
    }
    else if( ch>='0' && ch<='9')
    {
        printf("Character %c is digit \n", ch);

    }
    else
    {
        printf("None of above \n");
    }
return 0;
    

    
}

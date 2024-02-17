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

    switch (ch)
    {
        case 'a' ... 'z' :
        printf(" %c is lower case\n", ch);
        break;
        case 'A' ... 'Z' :
        printf(" %c is Upper case\n", ch);
        break;
        case '0' ... '9' :
        printf(" %c is Digit\n", ch);
        break;
        default:
        printf("None of above\n");
    }
    return 0;
        
        




}

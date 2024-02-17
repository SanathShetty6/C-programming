/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
/*
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the Alphabets: \n");
    scanf("%c", &ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is vowel\n", ch);
        break;
        default:
        printf("%c is not an vowel\n", ch);
    }
    
    return 0;
}
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabets: \n");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    printf("%c is an vowel\n", ch);
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    printf("%c is an vowel\n", ch);
    else
    printf("%c is not an vowel\n", ch);
    return 0;
    }

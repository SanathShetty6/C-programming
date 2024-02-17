/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>
int main()
{
    int num,num1;
    float res;
    char opt;
    printf("Enter the number: \n");
    scanf("%d%d", &num,&num1);
    printf("Enter the operator(+,-,*,/): \n");
    getchar();
    scanf("%c", &opt);

    switch (opt)
    {
        case '+' :
        res=num+num1;
        printf("Addition of %d and %d = %2f\n", num,num1,res);
        break;
        case '-' :
        res=num-num1;
        printf("Subtraction of %d and %d = %2f\n", num,num1,res);
        break;
        case '*' :
        res=num*num1;
        printf("Multiplication of %d and %d = %2f\n", num,num1,res);
        break;
        case '/' :
        res=num/num1;
        printf("Division of %d and %d = %2f\n", num,num1,res);
        break;
        default:
        printf("None of above\n");
    }
return 0;

}

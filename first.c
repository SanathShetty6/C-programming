/*
NAME: SANATH SHETTY P
DATE: 
DESCRIPTION: 
*/
#include <stdio.h>
int main()
{
    int age;
    float salary;
    char option;
    double attendance;
    printf("Enter the age:\t");
    scanf("%d", &age);
    printf("\nEnter the salary");
    scanf("%f", &salary);
    printf("\nEnter the option");
    getchar();
    scanf("%c", &option);
    
    printf("\nEnter the attendance");
    scanf("%lf", &attendance);

    printf("The age is:%d\n", age);
    printf("The age is:%f\n", salary);
    printf("The age is:%c\n", option);
    printf("The age is:%lf\n", attendance);
    return 0;
}



#include <stdio.h>

void main()
{
    int num1,num2;
    printf("Enter number one: ");
    scanf("%d",&num1);
    printf("Enter number two: ");
    scanf("%d",&num2);
    printf("Before swapping numbers\n number one= %d\n number two= %d\n",num1,num2);
    num1=num1-num2;
    num2=num2+num1;
    num1=num2-num1;
     printf("After swapping numbers\n number one= %d\n number two= %d\n",num1,num2);
    return 0;

}

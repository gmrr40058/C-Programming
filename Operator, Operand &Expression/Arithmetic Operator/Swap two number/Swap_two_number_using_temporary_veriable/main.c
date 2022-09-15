#include <stdio.h>

int main()
{
   int num1,num2,temp;
   printf("Enter number one: ");
   scanf("%d",&num1);
   printf("Enter number two: ");
   scanf("%d",&num2);
   printf("Before swapping numbers\n number one= %d\n number two= %d\n",num1,num2);
   temp=num1;
   num1=num2;
   num2=temp;
   printf("After swapping numbers\n number one= %d\n number two= %d\n",num1,num2);

    return 0;
}

#include <stdio.h>

int main()
{
   int number;
   printf("Enter a decimal number: ");
   scanf("%d",&number);
   printf("The hexadecimal number is: %x",number);//%x is the format specifier for hexadecimal number.
   return 0;
}

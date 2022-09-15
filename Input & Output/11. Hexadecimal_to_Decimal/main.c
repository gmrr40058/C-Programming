#include <stdio.h>

int main()
{
   int number;
   printf("Enter a hexadecimal number: ");
   scanf("%x",&number);//%x is the format specifier for hexadecimal number.
   printf("The decimal number is: %d",number);
   return 0;
}

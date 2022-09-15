#include <stdio.h>

int main()
{
   int number;
   printf("Enter octal number: ");
   scanf("%o",&number);//%o is the format specifier for octal number.

   printf("The hexadecimal number is: %x",number);//%x is the format specifier for hexadecimal number.
   return 0;
}

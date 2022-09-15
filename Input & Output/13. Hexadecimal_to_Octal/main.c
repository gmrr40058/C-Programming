#include <stdio.h>

int main()
{
   int number;
   printf("Enter hexadecimal number: ");
   scanf("%x",&number);//%x is the format specifier for hexadecimal number.
   printf("The octal number is: %o",number);//%o is the format specifier for octal number.
   return 0;
}

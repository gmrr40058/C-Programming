#include <stdio.h>

int main()
{
   int number;
   printf("Enter a decimal number: ");
   scanf("%d",&number);
   printf("The octal number is: %o",number);//%o is the format specifier for octal number.
   return 0;
}

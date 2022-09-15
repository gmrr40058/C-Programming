#include <stdio.h>

int main()
{
   int number;
   printf("Enter a octal number: ");
   scanf("%o",&number);//%o is the format specifier for octal number.
   printf("The decimal number is: %d",number);
   return 0;
}

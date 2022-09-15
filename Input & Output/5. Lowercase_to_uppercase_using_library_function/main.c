#include <stdio.h>

int main()
{
    char lower,upper;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);
    upper= toupper(lower);// toupper is a library function which convert lowercase letter to uppercase letter.
    printf("The uppercase letter is: %c",upper);
    return 0;
}

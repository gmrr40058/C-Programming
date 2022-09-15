#include <stdio.h>

int main()
{
    char lower,upper;
    printf("Enter any uppercase letter: ");
    scanf("%c",&upper);
    lower= tolower(upper);// tolower is a library function which convert uppercase letter to lowercase letter.
    printf("The lowercase letter is: %c",lower);
    return 0;
}

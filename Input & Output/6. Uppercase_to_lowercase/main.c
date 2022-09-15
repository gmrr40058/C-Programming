//Convert uppercase letter to lowercase letter.
#include <stdio.h>

int main()
{
    char upper;
    printf("Enter any uppercase letter: ");
    scanf("%c",&upper);
    printf("The lowercase letter is: %c",upper+32);/*a=97(ASCII value),b=98(ASCII value),......,z=124(ASCII value), on the other hand
                                                 A=65(ASCII value),B=66(ASCII value),......,Z=92(ASCII value)
                                                 now,
                                                     a-A=97-65=32,b-B=98-66=32,....,z-Z=124-92=32
                                                     lowercase-uppercase=32
                                                     lowercase=uppercase+32*/
    return 0;
}

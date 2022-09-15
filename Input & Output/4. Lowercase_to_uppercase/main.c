//Convert lowercase letter to uppercase letter.
#include <stdio.h>

int main()
{
    char lower;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);
    printf("The uppercase letter is: %c",lower-32);/*a=97(ASCII value),b=98(ASCII value),......,z=124(ASCII value), on the other hand
                                                 A=65(ASCII value),B=66(ASCII value),......,Z=92(ASCII value)
                                                 now,
                                                     a-A=97-65=32,b-B=98-66=32,....,z-Z=124-92=32
                                                     lowercase-uppercase=32
                                                     uppercase=lowercase-32*/
    return 0;
}

#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter Centigrade temperature: ");
    scanf("%f",&C);
    F=(1.8*C)+32;// (C/5)=(F-32)/9 =>F-32=(9/5)*C =>F=(1.8*C)+32.
    printf("The Fahrenheit temperature of %f Centigrade is= %f",C,F);
    return 0;
}

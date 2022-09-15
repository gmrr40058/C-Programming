#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f",&F);
    C=(5*(F-32))/9;// (C/5)=(F-32)/9 =>F-32=(9/5)*C =>F=(1.8*C)+32.
    printf("The Centigrade temperature of %f Fahrenheit is= %f",F,C);
    return 0;
}

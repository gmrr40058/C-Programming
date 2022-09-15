#include <stdio.h>

void main()
{
    int num1,num2,n1,n2,rem,lcm;
    printf("Enter Bigger number: ");
    scanf("%d",&n1);
    num1=n1;//put n1 into num1 needed in lCM
    printf("Enter smaller number: ");
    scanf("%d",&n2);
    num2=n2;//put n2 into num2 needed in lCM
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;

    }
    printf("The GCD of %d and %d is %d.\n",num1,num2,n1);
    lcm=(num1*num2)/n1;
    printf("The LCM of %d and %d is %d.\n",num1,num2,lcm);
}

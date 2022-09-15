//Summation,Subtraction,Multiplication,Division and Modulus without using secondary variable.
#include <stdio.h>

void main()
{
    int num1,num2;
    printf("Enter a integer number: ");
    scanf("%d",&num1);
    printf("Enter another integer number: ");
    scanf("%d",&num2); // Both integer can read via one scanf() like the program bellow.
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %f\n",num1,num2,(float)num1/num2);// as division may come float so we have to write (float)num1 or num2/num1/(float)num2 or (float)num1/(float)num2.
    printf("%d mod %d = %d\n",num1,num2,num1%num2);
}

//Summation,Subtraction,Multiplication,Division and Modulus with using secondary variable.
/*#include <stdio.h>

void main()
{
    int num1,num2,sum,sub,mul,mod;
    float div;
    printf("Enter two integer number: ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/num2;
    mod=num1%num2;
    printf("%d + %d = %d\n",num1,num2,sum);
    printf("%d - %d = %d\n",num1,num2,sub);
    printf("%d * %d = %d\n",num1,num2,mul);
    printf("%d / %d = %f\n",num1,num2,div);// as division may come float so we have to write (float)num1 or num2/num1/(float)num2 or (float)num1/(float)num2.
    printf("%d mod %d = %d\n",num1,num2,mod);
}*/

